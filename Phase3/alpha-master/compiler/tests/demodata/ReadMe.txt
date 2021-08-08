Demo Data tuple: 32 bytes.
=========================
	- 4 bytes for key. Signed int, BIG_ENDIAN
	- 20 bytes for 20 random ASCII characters, data string
	- 4 bytes for random signed int data int1, BIG_ENDIAN
	- 4 bytes for random signed int data int2, BIG_ENDIAN


Index tuple: 8 bytes.
=========================
	- 4 bytes for key. Signed int, BIG_ENDIAN
	- 4 bytes for page pos of data tuple. Signed int, BIG_ENDIAN. 


Page pos is 0 based (first page is at position 0). 
The first data tuple or index tuple is on page 0, starting at byte 0.



Files
============================
randomNodes.bin: 10000 data tuples, each consisting of 32 byte. Random order! Total of 320.000 bytes

randomNodesSortedIndex.bin: 10000 index tuples, each consisting of 8 byte. Sorted by key! Total of 80.000 bytes
sortedNodes.bin: 10000 data tuples, each consisting of 32 byte, sorted by key! Total of 320.000 bytes



There are 2 special data tuples
================================
key:946222
data string: "            Stefanos"
data int1: 15
data int2: 56922 
It is the 1st element in randomNodes.bin (first tuple on page 0)

key:87896
data string: "              Spyros"
data int1: 9857
data int2: 123456 
It is the last element in randomNodes (last tuple on page 2499)

These data tuples are within the files



Helper stuff
=================================

Method to get a random String of length "length"
-------------------------------------------
	static String getAlphaNumericString(int length) 
	{ 
  
		// chose a Character random from this String 
		String AlphaNumericString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
				            + "0123456789"
				            + "abcdefghijklmnopqrstuvxyz"; 

		// create StringBuffer size of AlphaNumericString 
		StringBuilder sb = new StringBuilder(length); 

		for (int i = 0; i < length; i++) { 

		    // generate a random number between 
		    // 0 to AlphaNumericString variable length 
		    int index 
			= (int)(AlphaNumericString.length() 
				* Math.random()); 

		    // add Character one by one in end of sb 
		    sb.append(AlphaNumericString 
				  .charAt(index)); 
		} 

		return sb.toString(); 
	} 




Get random integers between 1 (inclusive) and MAX_KEY (inclusive)
------------------------------------------------------------------
Random random = new Random(); // initialize
random.nextInt(MAX_KEY) + 1;
random.nextInt(MAX_KEY) + 1;
random.nextInt(MAX_KEY) + 1;
.......



generate NO_OF_ELEMENTS random *unique* integers, between START_INT (inclusive) and END_INT (EXCLUSIVE) and return them as int[]
------------------------------------------------------------------------------------------------------------------------------
int START_INT = 1;
int END_INT = 1000001;
int NO_OF_ELEMENTS = 10000;
java.util.Random randomGenerator = new java.util.Random();
int[] randomInts = randomGenerator.ints(START_INT, END_INT).distinct().limit(NO_OF_ELEMENTS).toArray();



Sort array of Nodes implementing the Comparable interface
---------------------------------------------------------
public class Node implements Comparable<Node>{
	private int key;
	public Node(int key) {
		this.key = key;
	}
	@Override
	public int compareTo(Node otherNode) {
		if (this.getKey() == otherNode.getKey())
			return 0; // this == otherNode
		else if (this.getKey() > otherNode.getKey())
			return 1; // this > otherNode
		else
			return -1; // this < otherNode
	}
}

// generate instances of Node with random keys and put them in array
Node[] = nodes = new Node[NO_OF_ELEMENTS];
// do generation
......
// sort them 
java.util.Arrays.sort(nodes);
// nodes array is now sorted by key





Create a byte array of length 36 bytes, with data 1 int, 1 string of 20 ASCII Characters, 1 int, 1 int, 1 int
---------------------------------------------------------------------------------------------------------
	java.nio.ByteBuffer bb = java.nio.ByteBuffer.allocate(32); // allocate 32 bytes for the output
	bb.order(ByteOrder.BIG_ENDIAN);
	bb.putInt(int1);
	bb.put(dataString.getBytes(StandardCharsets.US_ASCII)); // dataString MUST be 20 characters!!
	bb.putInt(int2);
	bb.putInt(int3);
	bb.putInt(int4);
	byte[] result =  bb.array();



from byte array of 36 bytes length, read 1 int, 1 string of size 20 ASCII characters, 1 int, 1 int, 1 int
----------------------------------------------------------------------------------------------------
	if (byteArray == null || byteArray.length != 32) {
		throw new Exception("Invalid size");
	}
	DataInputStream dis = new DataInputStream(new ByteArrayInputStream(byteArray));
	int int1 = dis.readInt();
	byte[] bytesForDataString = new byte[20];
	dis.read(bytesForDataString, 0, 20); // read next 20 bytes
	string1 = new String(bytesForDataString, StandardCharsets.US_ASCII);
	int int2 = dis.readInt();
	int int3 = dis.readInt();
	int int4 = dis.readInt();
	dis.close(); // not really needed

