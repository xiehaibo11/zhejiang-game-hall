local MailData = class("MailData")

MailData.EVENT_MAIL_DATA_CHANGED = "EVENT_MAIL_DATA_CHANGED"
MailData.EVENT_MAIL_DETAIL_INFO = "EVENT_MAIL_DETAIL_INFO"

local MAIL_DEBUG = false

function MailData:ctor()
    cc(self):addComponent("components.behavior.EventProtocol"):exportMethods()
    -- 邮件列表
    self._mailArray = {}
    -- 最大邮件id
    self._maxMailID = 0
    -- 新邮件数量
    self._newMailCount = 0
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
        if mailid == value.mail_id then
            return false
        end
    end

    -- 邮件标题为空或者发送时间为0，也为无效邮件
    if mail and (mail.title == "" or mail.send_time == 0) then
        return false
    end

    return true
end

-- 新增邮件数据
function MailData:addMails(mails)
    for i = 1, #mails do
        if self:isValidMail(mails[i].mail_id, mails[i]) == true then
            self._mailArray[#self._mailArray + 1] = mails[i]
        end
    end

    if #mails > 0 then
        self:updateMaxMailId()
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
            if not deleteSet[item.mail_id] then
                table.insert(newArr, item)
            end
        end
        return newArr
    end

    -- 更新邮件列表和详情列表
    self._mailArray = filterArray(self._mailArray)
    self._detailInfoArray = filterArray(self._detailInfoArray)

    -- 检查当前查看的邮件是否被删除
    if self._curDetailInfo and deleteSet[self._curDetailInfo.mail_id] then
        self._curDetailInfo = nil
    end

    self:updateMaxMailId()
end

-- 设置邮件状态
function MailData:setMailState(unread, count)
    self._newMailCount = count or 0
end

-- 获取最大邮件id
function MailData:getMaxMailId()
    return self._maxMailID or 0
end

-- 获取新到达邮件数
function MailData:getNewMailCount()
    return self._newMailCount
end

-- 更新最大邮件
function MailData:updateMaxMailId()
    for _, value in ipairs(self._mailArray) do
        if value.mail_id > self._maxMailID then
            self._maxMailID = value.mail_id
        end
    end
    if #self._mailArray == 0 then
        self._maxMailID = 0
    end

    self:sortMailList()

    self:dispatchMailData()
end

function MailData:getMailCount()
    return #self._mailArray or 0
end

function MailData:refreshReadState(mailids)
    for i = 1, #mailids do
        for _, value in ipairs(self._mailArray) do
            if value.mail_id == mailids[i] then
                value.isRead = true
            end
        end
    end
end

-- 设置邮件详情
function MailData:setMailDetail(detail)
    self._detailInfoArray[detail.mail_id] = detail
    self._curDetailInfo = detail
    self:refreshReadState({detail.mail_id})
    --self:dispatchMailData()
    self:dispatchEvent({name = self.EVENT_MAIL_DETAIL_INFO})
end

-- 获取邮件详情
function MailData:getMailDetail()
    return self._curDetailInfo
end

function MailData:resetDetail()
    self._curDetailInfo = nil
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
        value.isRead = true
    end

    self:dispatchMailData()
end

-- 带有奖励的邮件
function MailData:getAwardMails()
    local mailids = {}
    for _, value in ipairs(self._mailArray) do
        if value.isAnnex == true then
            mailids[#mailids + 1] = value.mail_id
        end
    end

    return mailids
end

-- 未读的邮件
function MailData:getUnReadMails()
    local mailids = {}
    for _, value in ipairs(self._mailArray) do
        if value.isRead == false then
            mailids[#mailids + 1] = value.mail_id
        end
    end

    return mailids
end

function MailData:getMailIds()
    local mailids = {}
    for _, value in ipairs(self._mailArray) do
        mailids[#mailids + 1] = value.mail_id
    end

    return mailids
end

-- 领取奖励
function MailData:awardMails(mailids)
    for i = 1, #mailids do
        for _, value in ipairs(self._mailArray) do
            if value.mail_id == mailids[i] then
                value.isAnnex = false
            end
        end
    end

    --self:dispatchMailData()
    self:dispatchEvent({name = self.EVENT_MAIL_DETAIL_INFO})
end

function MailData:getMailInfoByMailId(mailId)
    for _, value in ipairs(self._mailArray) do
        if value.mail_id == mailId then
            return value
        end
    end
end

function MailData:getMailCountStr()
    local readCnt = 0
    local allMail = #self._mailArray
    for _, value in ipairs(self._mailArray) do
        if value.isRead == false then
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
                if mail.isAnnex and not mail.isRead then    -- 有附件未读 (最高优先级)
                    return 1
                elseif not mail.isAnnex and not mail.isRead then -- 无附件未读
                    return 2
                elseif mail.isAnnex and mail.isRead then    -- 有附件已读
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
                -- 同组内按邮件ID倒序排列（新邮件在前）
                return a.mail_id > b.mail_id
            end
        end
    )
end

function MailData:testMail()
    if not MAIL_DEBUG then
        return
    end
    local MailProtocol = require("app.Protocols.MailProtocol")
    local maxCnt = #self._mailArray
    if maxCnt > 0 then
        self:updateMaxMailId()
        return
    end
    local maillist = {}
    for i = maxCnt + 1, maxCnt + 20 do
        local mail_info = MailProtocol.MailInfo:new()
        mail_info.mail_id = i
        mail_info.expire_time = 1593067726 - i * 60 * 60 * 24
        mail_info.title = "测试邮件title." .. i
        mail_info.intro = "我是测试测试测试测试测试邮件intro." .. i
        local showAward = false
        if i % 2 == 0 then
            showAward = true
        end
        mail_info.isRead = showAward
        mail_info.isAnnex = showAward
        maillist[#maillist + 1] = mail_info
    end

    self:setMailList(maillist)
end

function MailData:testMailDetail(index)
    if not MAIL_DEBUG then
        return
    end
    local MailProtocol = require("app.Protocols.MailProtocol")
    local mail_info = MailProtocol.RespGetMailDetail:new()
    mail_info.askid = os.time()
    mail_info.mail_id = self._mailArray[index + 1].mail_id
    mail_info.sender = "大王叫我来巡山" .. mail_info.mail_id
    mail_info.send_time = "2020-06-05 16:57:04"
    mail_info.mail_content = "测试邮件内容"
    mail_info.award_count = 4
    for i = 1, mail_info.award_count do
        local award_info = MailProtocol.AwardInfo:new()
        award_info.url = "https://palmstatic.hzxuanming.com/materials/images/20200915/18102152897.png"
        award_info.desc = "砖石100" .. i
        mail_info.award_list[i] = award_info
    end

    if self._detailInfoArray.mail_id ~= mail_info.mail_id then
        self:setMailDetail(mail_info)
    end
end

function MailData:testReadAll()
    if not MAIL_DEBUG then
        return
    end
    self:readAllMail()
end

function MailData:testAward(mailid, isRewardAll)
    if not MAIL_DEBUG then
        return
    end

    local mailids = {}

    if isRewardAll then
        for _, value in ipairs(self._mailArray) do
            if value.isAnnex == true then
                mailids[#mailids + 1] = value.mail_id
            end
        end
    else
        mailids = {mailid}
    end

    self:awardMails(mailids)
end

function MailData:getExpireTime(mail_id)
    for _, v in pairs(self._mailArray) do
        if v.mail_id == mail_id then
            return v.expire_time
        end
    end
    return 0
end

return MailData
�&