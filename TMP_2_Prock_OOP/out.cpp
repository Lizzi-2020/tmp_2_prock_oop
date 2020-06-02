#include "container.h"
#include "transport.h"
void container::Out(ofstream &ofst)
{
	ofst << "Container contents " << data
		<< " elements." << endl;
	for (int i = 0; i < data; i++) {
		noda->data->Out(ofst);
		noda = noda->next;
	}

}