#ifndef _COMMON_H_
#define _COMMON_H_

#include "qtcocos2d.h"
#include "qstring.h"
#include "BoxList.h"
#include "EditorMain.h"
#include <string>

USING_NS_CC;
class SceneCtrl;

class NodeInfo
{
public:
	std::string typeName;
	Node* self;
	std::list<NodeInfo> children;
};

class Global
{
public:
	static SceneCtrl* sceneCtrl;
	static BoxList* boxList;
	static EditorMain* editorMain;
};

#endif//_COMMON_H_
