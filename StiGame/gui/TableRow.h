#ifndef TABLEROW_H
#define TABLEROW_H

#include "TableCell.h"
#include <vector>
#include "ValueObject.h"

namespace StiGame
{

namespace Gui
{
/// \class TableRow
/// \brief A Row for the Table Item [WIP]
class TableRow 
{
public:
	/// \brief Constructor
	TableRow();
	/// \brief Destructor
	virtual ~TableRow();
	/// \brief Add a new cell to the row 
	/// \param cell New cell
	void addCell(TableCell *cell);
	/// \brief Get the cell at the specified index
	/// \param index Cell index
	/// \return Cell Pointer
	TableCell* getCell(int index);
	/// \brief Get the Cells Count (Need to rename this method to cellsCount)
	/// \return Cell Count
    int cellsCount(void);

    int getCellIndex(TableCell *cell);

    void subscribeCells(CellValueChangedEventListener *listener);

    void setValue(int index, std::string m_value);

    void setForeground(Color *m_foreground);
    void setFont(Font *m_font);

    ValueObject* getValueObject(void);
    void setValueObject(ValueObject *m_valueObject);

protected:
    ValueObject *valueObject;
	/// \brief Cells of this row
	std::vector<TableCell*> cells;
};


}


}

#endif
