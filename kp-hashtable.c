/*
The corresponding video tutorial is available at this location

https://youtu.be/ENgrV-9cFcU - Overview of Hashtable datastructure

You need to impelment following functions put(char * hashtable[], char*key, char * value); get(char *hashtable[], char * key) get_hash_code(char * key);

You are given a pointer to an array called hashtable, that stores the information. The index is the hashcode and the value is stored in the hashtable array.

Input Format

int get_hash_code(char * key) - This method should generate an integer hashcode.

put(char * hashtable[], char*key, char * value);

The put method should insert the element in the array.

get(char *hashtable[], char * key)

The get method retrieves the element from the array

The first line contains an integer n which corresponds to the number of elements in the Hashtable. The following lines contains the key-value pair that needs to be stored in hashtable

Constraints

0>n<=100

Output Format

The hashtable contents

Sample Input 0

10
11 name1
22 name2
33 name3
44 name4
55 name5
66 name6
77 name7
88 name8
99 name9
110 name10
Sample Output 0

key=11-value=name1
key=22-value=name2
key=33-value=name3
key=44-value=name4
key=55-value=name5
key=66-value=name6
key=77-value=name7
key=88-value=name8
key=99-value=name9
key=110-value=name10
Sample Input 1

20
11 name1
22 name2
33 name3
44 name4
55 name5
66 name6
77 name7
88 name8
99 name9
110 name10
111 name11
122 name12
133 name13
144 name14
155 name15
166 name16
177 name17
188 name18
199 name19
200 name20
Sample Output 1

key=11-value=name1
key=22-value=name2
key=33-value=name3
key=44-value=name4
key=55-value=name5
key=66-value=name6
key=77-value=name7
key=88-value=name8
key=99-value=name9
key=110-value=name10
key=111-value=name11
key=122-value=name12
key=133-value=name13
key=144-value=name14
key=155-value=name15
key=166-value=name16
key=177-value=name17
key=188-value=name18
key=199-value=name19
key=200-value=name20
Sample Input 2

30
11 name1
22 name2
33 name3
44 name4
55 name5
66 name6
77 name7
88 name8
99 name9
110 name10
111 name11
122 name12
133 name13
144 name14
155 name15
166 name16
177 name17
188 name18
199 name19
200 name20
211 name21
222 name22
233 name23
244 name24
255 name25
266 name26
277 name27
288 name28
299 name29
300 name30
Sample Output 2

key=11-value=name1
key=22-value=name2
key=33-value=name3
key=44-value=name4
key=55-value=name5
key=66-value=name6
key=77-value=name7
key=88-value=name8
key=99-value=name9
key=110-value=name10
key=111-value=name11
key=122-value=name12
key=133-value=name13
key=144-value=name14
key=155-value=name15
key=166-value=name16
key=177-value=name17
key=188-value=name18
key=199-value=name19
key=200-value=name20
key=211-value=name21
key=222-value=name22
key=233-value=name23
key=244-value=name24
key=255-value=name25
key=266-value=name26
key=277-value=name27
key=288-value=name28
key=299-value=name29
key=300-value=name30
Sample Input 3

50
11 name1
22 name2
33 name3
44 name4
55 name5
66 name6
77 name7
88 name8
99 name9
110 name10
111 name11
122 name12
133 name13
144 name14
155 name15
166 name16
177 name17
188 name18
199 name19
200 name20
211 name21
222 name22
233 name23
244 name24
255 name25
266 name26
277 name27
288 name28
299 name29
300 name30
311 name31
322 name32
333 name33
344 name34
355 name35
366 name36
377 name37
388 name38
399 name39
400 name40
411 name41
422 name42
433 name43
444 name44
455 name45
466 name46
477 name47
488 name48
499 name49
500 name50
Sample Output 3

key=11-value=name1
key=22-value=name2
key=33-value=name3
key=44-value=name4
key=55-value=name5
key=66-value=name6
key=77-value=name7
key=88-value=name8
key=99-value=name9
key=110-value=name10
key=111-value=name11
key=122-value=name12
key=133-value=name13
key=144-value=name14
key=155-value=name15
key=166-value=name16
key=177-value=name17
key=188-value=name18
key=199-value=name19
key=200-value=name20
key=211-value=name21
key=222-value=name22
key=233-value=name23
key=244-value=name24
key=255-value=name25
key=266-value=name26
key=277-value=name27
key=288-value=name28
key=299-value=name29
key=300-value=name30
key=311-value=name31
key=322-value=name32
key=333-value=name33
key=344-value=name34
key=355-value=name35
key=366-value=name36
key=377-value=name37
key=388-value=name38
key=399-value=name39
key=400-value=name40
key=411-value=name41
key=422-value=name42
key=433-value=name43
key=444-value=name44
key=455-value=name45
key=466-value=name46
key=477-value=name47
key=488-value=name48
key=499-value=name49
key=500-value=name50
Sample Input 4

20
25900 name25900
18532 name18532
27232 name27232
7751 name7751
15400 name15400
28687 name28687
22756 name22756
7018 name7018
19233 name19233
26603 name26603
25203 name25203
8737 name8737
22426 name22426
1512 name1512
9923 name9923
9706 name9706
17028 name17028
23310 name23310
16353 name16353
20808 name20808
Sample Output 4

key=25900-value=name25900
key=18532-value=name18532
key=27232-value=name27232
key=7751-value=name7751
key=15400-value=name15400
key=28687-value=name28687
key=22756-value=name22756
key=7018-value=name7018
key=19233-value=name19233
key=26603-value=name26603
key=25203-value=name25203
key=8737-value=name8737
key=22426-value=name22426
key=1512-value=name1512
key=9923-value=name9923
key=9706-value=name9706
key=17028-value=name17028
key=23310-value=name23310
key=16353-value=name16353
key=20808-value=name20808
Sample Input 5

40
24817 name24817
31825 name31825
21372 name21372
6069 name6069
13563 name13563
2625 name2625
6008 name6008
24290 name24290
9770 name9770
18850 name18850
21250 name21250
31979 name31979
1594 name1594
2672 name2672
1403 name1403
29007 name29007
32242 name32242
24067 name24067
10346 name10346
8520 name8520
20550 name20550
12792 name12792
3572 name3572
23187 name23187
13101 name13101
11745 name11745
11035 name11035
14078 name14078
23104 name23104
16300 name16300
18871 name18871
11446 name11446
3864 name3864
724 name724
24116 name24116
22349 name22349
29540 name29540
28233 name28233
32017 name32017
17806 name17806
Sample Output 5

key=24817-value=name24817
key=31825-value=name31825
key=21372-value=name21372
key=6069-value=name6069
key=13563-value=name13563
key=2625-value=name2625
key=6008-value=name6008
key=24290-value=name24290
key=9770-value=name9770
key=18850-value=name18850
key=21250-value=name21250
key=31979-value=name31979
key=1594-value=name1594
key=2672-value=name2672
key=1403-value=name1403
key=29007-value=name29007
key=32242-value=name32242
key=24067-value=name24067
key=10346-value=name10346
key=8520-value=name8520
key=20550-value=name20550
key=12792-value=name12792
key=3572-value=name3572
key=23187-value=name23187
key=13101-value=name13101
key=11745-value=name11745
key=11035-value=name11035
key=14078-value=name14078
key=23104-value=name23104
key=16300-value=name16300
key=18871-value=name18871
key=11446-value=name11446
key=3864-value=name3864
key=724-value=name724
key=24116-value=name24116
key=22349-value=name22349
key=29540-value=name29540
key=28233-value=name28233
key=32017-value=name32017
key=17806-value=name17806
*/


#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *hash[101];

typedef struct record
{
        char * key;
        char * name;
        struct record *next;
}record;


int get_hash_code(char *key)
{
       //Write code to generate hashcode, ensure the generated hashcode is between 0-100
       int Hash_key ;
       sscanf(key, "%d", &Hash_key);
       return Hash_key%100;   
    
}
void put(void * hashtable[], char *key, void *value)
{
	//Write your code here. Store the key-value pair in hashtable, the index should be a hashcode
    int hashcode = get_hash_code(key);
    record *Object_record = (record*)calloc(1,sizeof(record));
    Object_record->key = key;
    Object_record->name = value;
    Object_record ->next =NULL;
    if(hashtable[hashcode])
    {
        record* linklistNode = hashtable[hashcode];
        while(linklistNode->next)
        {
            linklistNode = linklistNode ->next;
        }
        linklistNode ->next = Object_record;
        
    }
    else
    {
        hashtable[hashcode] = Object_record;
    }
}

void * get(void * hashtable[],char * key)
{
    //Write your code here. Retrieve the value from hashtable using the index which is a hashed value of key.
    int hashcode = get_hash_code(key);
    record* linklistNode = hashtable[hashcode];
    
    while(strcmp(linklistNode->key,key)!=0)
    {
       linklistNode = linklistNode ->next;
    }
   return linklistNode ->name;

}


char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    
    char* data = malloc(alloc_length);
    
    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);
        
        if (!line) {
            break;
        }
        
        data_length += strlen(cursor);
        
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }
        
        alloc_length <<= 1;
        
        data = realloc(data, alloc_length);
        
        if (!data) {
            data = '\0';
            
            break;
        }
    }
    
    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
        
        data = realloc(data, data_length);
        
        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);
        
        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }
    
    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }
    
    if (!*str) {
        return str;
    }
    
    while (*str != '\0' && isspace(*str)) {
        str++;
    }
    
    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }
    
    if (!*str) {
        return str;
    }
    
    char* end = str + strlen(str) - 1;
    
    while (end >= str && isspace(*end)) {
        end--;
    }
    
    *(end + 1) = '\0';
    
    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);
    
    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }
    
    return value;
}
typedef struct record_type
{
        char * phone;
        char * name;
} record_t;
                
record_t parse_record(char *line)
{       
        record_t record;
        record.phone= strtok(line," "); 
        record.name= strtok(NULL," ");

        return record;
}
long parse_long(char* str) {
    char* endptr;
    long value = strtol(str, &endptr, 10);
    
    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
 
   }
  return value;
}
int main(int argc, char * argv[])
{   
    
       
    record_t records[100];
    int count=0;
    count= parse_int(ltrim(rtrim(readline())));
    for (int i = 0; i < count; i++) {
        records[i] = parse_record(ltrim(rtrim(readline())));
        put(hash,records[i].phone, records[i].name);
    }
    for (int i = 0; i < count; i++) {
        char * name =get(hash,records[i].phone);
        if(strcmp(name,records[i].name)!=0)
        {       
                printf("Incorrect data retrieved for key=%s - value=%s\n", records[i].phone,name);
        }
        else
        {       
                printf("key=%s-value=%s\n",records[i].phone,name);
        }
    }
    
    return 0;
}
