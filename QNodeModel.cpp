/*
Copyright (C) 2017 Rodrigo Jose Hernandez Cordoba

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#include "QNodeModel.h"
QNodeModel::QNodeModel(QObject * parent)  : QAbstractItemModel(parent)
{
}
QNodeModel::~QNodeModel()
{
}

QModelIndex QNodeModel::index(int row, int column, const QModelIndex & parent) const
{
	return QModelIndex();
}

QModelIndex QNodeModel::parent(const QModelIndex & index) const
{
	return QModelIndex();
}

int QNodeModel::rowCount(const QModelIndex & parent) const
{
	return 0;
}

int QNodeModel::columnCount(const QModelIndex & parent) const
{
	return 0;
}

QVariant QNodeModel::data(const QModelIndex & index, int role) const
{
	return QVariant();
}
