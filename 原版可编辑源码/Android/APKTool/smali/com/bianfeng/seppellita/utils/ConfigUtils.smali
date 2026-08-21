.class public Lcom/bianfeng/seppellita/utils/ConfigUtils;
.super Ljava/lang/Object;
.source "ConfigUtils.java"


# instance fields
.field private callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

.field private maxCount:I

.field private timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;


# direct methods
.method public constructor <init>(Lcom/bianfeng/seppellita/SepperllitaCallback;)V
    .locals 1

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/high16 v0, 0x100000

    .line 13
    iput v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->maxCount:I

    .line 17
    new-instance v0, Lcom/bianfeng/seppellita/utils/TimeUtils;

    invoke-direct {v0}, Lcom/bianfeng/seppellita/utils/TimeUtils;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    .line 18
    iput-object p1, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    return-void
.end method


# virtual methods
.method public getCurrentTimeFormat()Ljava/lang/String;
    .locals 1

    .line 42
    iget-object v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    if-eqz v0, :cond_0

    .line 43
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getCurrentTimeFormat()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public getLastMonthTime()Ljava/lang/String;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    if-eqz v0, :cond_0

    .line 75
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getLastMonthTime()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public getLastTime()Ljava/lang/String;
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    if-eqz v0, :cond_0

    .line 67
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getIntervalSelectTime()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public getMaxCount()I
    .locals 1

    .line 62
    iget v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->maxCount:I

    return v0
.end method

.method public getOffsetTime()J
    .locals 2

    .line 34
    iget-object v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    if-eqz v0, :cond_0

    .line 35
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getOffsetTime()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public getOnLineTime()Ljava/lang/String;
    .locals 3

    .line 87
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    invoke-virtual {v1}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getOnLineTime()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public onInit(Lcom/bianfeng/seppellita/bean/InitBean$DataBean;)V
    .locals 2

    .line 50
    iget-object v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    if-eqz v0, :cond_0

    .line 51
    invoke-virtual {v0, p1}, Lcom/bianfeng/seppellita/utils/TimeUtils;->setInit(Lcom/bianfeng/seppellita/bean/InitBean$DataBean;)V

    :cond_0
    if-eqz p1, :cond_1

    .line 53
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->getPack_size()I

    move-result v0

    if-eqz v0, :cond_1

    .line 54
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->getPack_size()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->maxCount:I

    .line 56
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->callback:Lcom/bianfeng/seppellita/SepperllitaCallback;

    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/TimerUtils;->setCallback(Lcom/bianfeng/seppellita/SepperllitaCallback;)V

    .line 57
    iget-object p1, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    invoke-virtual {p1}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getIntervalPostTime()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/bianfeng/seppellita/utils/TimerUtils;->sendMsg(J)V

    .line 58
    invoke-static {}, Lcom/bianfeng/seppellita/event/EventManager;->launch()V

    return-void
.end method

.method public onPause()V
    .locals 1

    .line 22
    iget-object v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    if-eqz v0, :cond_0

    .line 23
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->onPause()V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 1

    .line 28
    iget-object v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    if-eqz v0, :cond_0

    .line 29
    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->onResume()V

    :cond_0
    return-void
.end method

.method public setTimer()V
    .locals 2

    const-string v0, "setTimer"

    .line 82
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 83
    iget-object v0, p0, Lcom/bianfeng/seppellita/utils/ConfigUtils;->timeUtils:Lcom/bianfeng/seppellita/utils/TimeUtils;

    invoke-virtual {v0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getIntervalPostTime()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/bianfeng/seppellita/utils/TimerUtils;->sendMsg(J)V

    return-void
.end method
