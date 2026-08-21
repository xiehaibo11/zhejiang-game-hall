local MailData = class("MailData")

MailData.EVENT_MAIL_DATA_CHANGED = "EVENT_MAIL_DATA_CHANGED"
MailData.EVENT_MAIL_DETAIL_INFO = "EVENT_MAIL_DETAIL_INFO"

local MAIL_DEBUG = false
local MAIL_MAXAWARD_COUNT = 10

function MailData:ctor()
    cc(self):addComponent("components.behavior.EventProtocol"):exportMethods()
    -- 邮件列表
    self._mailArray = {}
    -- 邮件详情
    self._detailInfoArray = {}
    -- 当前邮件详情
    self._curDetailInfo = nil
    -- 是否登录后第一次拉取
    self._isFirst = true
end

function MailData:setMailFirst(isFirst)
    self._isFirst = isFirst
end

function MailData:getMailFirst()
    return self._isFirst
end

-- 设置邮件列表数据
function MailData:setMailList(mails)
    print("MailData:setMailList.." .. #mails)
    if mails and #mails > 0 then
        self:addMails(mails)
    end
end

-- 获取邮件列表
function MailData:getMailList()
    return self._mailArray
end

-- 是否是有效的邮件，本地存在或者id=0的为无效
function MailData:isValidMail(mailid, mail)
    if mailid == 0 then
        return false
    end
    for _, value in ipairs(self._mailArray) do
        if mailid == value.mailId then
            return false
        end
    end

    -- 邮件标题为空或者发送时间为0，也为无效邮件
    if mail and (mail.title == "" or mail.publishTime == 0) then
        return false
    end

    return true
end

-- 新增邮件数据
function MailData:addMails(mails)
    for i = 1, #mails do
        if self:isValidMail(mails[i].mailId, mails[i]) == true then
            self._mailArray[#self._mailArray + 1] = mails[i]
        end
    end

    if #mails > 0 then
        self:updateMailList()
    end
end

-- 删除邮件
function MailData:delMails(mails)
    -- 创建待删除邮件ID的哈希表（O(1) 查询）
    local deleteSet = {}
    for _, id in ipairs(mails) do
        deleteSet[id] = true
    end

    -- 通过一次遍历过滤出保留的邮件（O(n) 时间复杂度）
    local function filterArray(arr)
        local newArr = {}
        for _, item in ipairs(arr) do
            if not deleteSet[item.mailId] then
                table.insert(newArr, item)
            end
        end
        return newArr
    end

    -- 更新邮件列表和详情列表
    self._mailArray = filterArray(self._mailArray)
    self._detailInfoArray = filterArray(self._detailInfoArray)

    -- 检查当前查看的邮件是否被删除
    if self._curDetailInfo and deleteSet[self._curDetailInfo.mailId] then
        self._curDetailInfo = nil
    end

    self:updateMailList()
end

-- 更新最大邮件
function MailData:updateMailList()
    self:sortMailList()
    self:dispatchMailData()
end

function MailData:getMailCount()
    return #self._mailArray or 0
end

function MailData:refreshReadState(mailids)
    for i = 1, #mailids do
        for _, value in ipairs(self._mailArray) do
            if value.mailId == mailids[i] then
                value.unread = false
            end
        end
    end
end

-- 设置邮件详情
function MailData:setMailDetail(detail)
    self._detailInfoArray[detail.mailId] = detail
    self._curDetailInfo = detail
    local curMail = self:getMailInfoByMailId(detail.mailId)
    self._curDetailInfo.haveAward = curMail.haveAward
    self:refreshReadState({detail.mailId})
    --self:dispatchMailData()
    self:dispatchEvent({name = self.EVENT_MAIL_DETAIL_INFO})
end

-- 获取邮件详情
function MailData:getMailDetail()
    return self._curDetailInfo
end

function MailData:resetMailData()
    self._curDetailInfo = nil
    self._mailArray = {}
    self._detailInfoArray = {}
    self:setMailFirst(true)
end

-- 根据邮件id获取邮件详情
function MailData:getMailDetailById(mailid)
    return self._detailInfoArray[mailid]
end

function MailData:dispatchMailData()
    self:dispatchEvent({name = self.EVENT_MAIL_DATA_CHANGED})
end

-- 一键已读
function MailData:readAllMail()
    for _, value in ipairs(self._mailArray) do
        value.unread = false
    end

    self:dispatchMailData()
end

-- 带有奖励的邮件,服务限制领取奖励邮件数量,一次最多领取10封,领取过多会卡顿
function MailData:getAwardMails()
    local mailids = {}
    for _, value in ipairs(self._mailArray) do
        if value.undraw == true then
            mailids[#mailids + 1] = value.mailId
            if #mailids >= MAIL_MAXAWARD_COUNT then
                break
            end
        end
    end
    return mailids
end

-- 未读的邮件
function MailData:getUnReadMails()
    local mailids = {}
    for _, value in ipairs(self._mailArray) do
        if value.unread == true then
            mailids[#mailids + 1] = value.mailId
        end
    end

    return mailids
end

function MailData:getMailIds()
    local mailids = {}
    for _, value in ipairs(self._mailArray) do
        mailids[#mailids + 1] = value.mailId
    end

    return mailids
end

-- 领取奖励
function MailData:awardMails(mailids)
    for i = 1, #mailids do
        for _, value in ipairs(self._mailArray) do
            if value.mailId == mailids[i] then
                value.undraw = false
            end
        end
    end

    --self:dispatchMailData()
    self:dispatchEvent({name = self.EVENT_MAIL_DETAIL_INFO})
end

function MailData:getMailInfoByMailId(mailId)
    for _, value in ipairs(self._mailArray) do
        if value.mailId == mailId then
            return value
        end
    end
end

function MailData:getMailCountStr()
    local readCnt = 0
    local allMail = #self._mailArray
    for _, value in ipairs(self._mailArray) do
        if value.unread == true then
            readCnt = readCnt + 1
        end
    end

    return "（" .. readCnt .. "/" .. allMail .. "）"
end

-- 邮件列表排序
function MailData:sortMailList()
    table.sort(
        self._mailArray,
        function(a, b)
            -- 自定义优先级计算函数
            local function get_priority(mail)
                if mail.undraw and mail.unread then    -- 有附件未读 (最高优先级)
                    return 1
                elseif not mail.undraw and mail.unread then -- 无附件未读
                    return 2
                elseif mail.undraw and not mail.unread then    -- 有附件已读
                    return 3
                else                                        -- 无附件已读 (最低优先级)
                    return 4
                end
            end

            local pa = get_priority(a)
            local pb = get_priority(b)

            -- 优先比较优先级组
            if pa ~= pb then
                return pa < pb -- 数值小的组优先
            else
                -- 同组内按邮件发送时间倒序排列（新邮件在前）
                return a.publishTime > b.publishTime
            end
        end
    )
end

function MailData:getExpireTime(mail_id)
    for _, v in pairs(self._mailArray) do
        if v.mailId == mail_id then
            return v.expireTime
        end
    end
    return 0
end

return MailData
�