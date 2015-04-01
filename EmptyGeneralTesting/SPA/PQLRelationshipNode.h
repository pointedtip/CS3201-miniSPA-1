#ifndef PQLRelationshipNode_H
#define PQLRelationshipNode_H
#include "PQLAttributeNode.h"
#include <string>
#include <vector>
using namespace std;

class PQLRelationshipNode {
public:
	PQLRelationshipNode(string str);
	PQLRelationshipNode* getNextRel();
	vector<PQLAttributeNode*> getChildren();
	void setNext(PQLRelationshipNode* node);
	string getName();
	void setName(string);
private:
	PQLRelationshipNode* R_next;
	vector<PQLAttributeNode*> children;
	string name;
};

#endif