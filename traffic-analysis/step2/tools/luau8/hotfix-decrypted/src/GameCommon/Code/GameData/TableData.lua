local TableData = class("TableData")

TableData._chairs = 0
TableData._gameRule = ""
TableData._haveOwner = 0
TableData._havePWD = 0
TableData._joinRule = ""
TableData._ownerBrandID = 0
TableData._ownerNumberID = 0
TableData._seeRule = ""
TableData._state = 0
TableData._tableID = 0
TableData._tableStyle = 0

function TableData.updateTableData(tableDataMsg)
    TableData._chairs = tableDataMsg.m_Chairs
    TableData._gameRule = tableDataMsg.m_GameRule
    TableData._haveOwner = tableDataMsg.m_HaveOwner
    TableData._havePWD = tableDataMsg.m_HavePWD
    TableData._joinRule = tableDataMsg.m_JoinRule
    TableData._ownerBrandID = tableDataMsg.m_OwnerBrandID
    TableData._ownerNumberID = tableDataMsg.m_OwnerNumberID
    TableData._seeRule = tableDataMsg.m_SeeRule
    TableData._state = tableDataMsg.m_State
    TableData._tableID = tableDataMsg.m_TableID
    TableData._tableStyle = tableDataMsg.m_TableStyle
end

function TableData.getChairs()
    return TableData._chairs 
end

function TableData.getGameRule()
    return TableData._gameRule 
end

function TableData.getHaveOwner()
    return TableData._haveOwner 
end

function TableData.getHavePWD()
    return TableData._havePWD 
end

function TableData.getJoinRule()
    return TableData._joinRule 
end

function TableData.getOwnerBrandID()
    return TableData._ownerBrandID 
end

function TableData.getOwnerNumberID()
    return TableData._ownerNumberID 
end

function TableData.getSeeRule()
    return TableData._seeRule 
end

function TableData.getState()
    return TableData._state 
end

function TableData.getTableID()
    return TableData._tableID 
end

function TableData.getTableStyle()
    return TableData._tableStyle 
end

return TableData�