.class Lcom/bianfeng/toponad/ToponAdInterface$1;
.super Ljava/lang/Object;
.source "ToponAdInterface.java"

# interfaces
.implements Lcom/bianfeng/toponad/ui/TopOnAdCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/toponad/ToponAdInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/toponad/ToponAdInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/toponad/ToponAdInterface;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onADClicked(Ljava/lang/String;)V
    .locals 2

    .line 83
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u70b9\u51fb"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 84
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8a8

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onADDismissed(Ljava/lang/String;)V
    .locals 2

    .line 89
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u5173\u6389"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 90
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8a9

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onADPresent(Ljava/lang/String;)V
    .locals 2

    .line 101
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u5c55\u793a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 102
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8ab

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onAdLoadApi(Ljava/lang/String;)V
    .locals 2

    .line 138
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u8c03\u8d77\u52a0\u8f7dapi"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 139
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8b1

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onAdLoaded(Ljava/lang/String;)V
    .locals 2

    .line 119
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u5df2\u52a0\u8f7d\u8fc7"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 120
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8af

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onAdLoading(Ljava/lang/String;)V
    .locals 2

    .line 131
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u6b63\u5728\u52a0\u8f7d\u4e2d"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 132
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8b0

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onAdReady(Ljava/lang/String;)V
    .locals 2

    .line 107
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u51c6\u5907"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 108
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8ac

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onAdShowApi(Ljava/lang/String;)V
    .locals 2

    .line 150
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u663e\u793aapi\u8c03\u7528"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 151
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8b3

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onAdShowCheckFail(Ljava/lang/String;)V
    .locals 2

    .line 144
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u663e\u793a\u6821\u9a8c\u5931\u8d25"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 145
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8b2

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onAdShowFail(Ljava/lang/String;)V
    .locals 2

    .line 156
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u663e\u793a\u5931\u8d25"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 157
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8b4

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onCompletedAd(Ljava/lang/String;)V
    .locals 2

    .line 113
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u5b8c\u6210"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 114
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8ad

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onNoAD(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 95
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u9519\u8bef"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|errMessage\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 96
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const p2, 0x1d8aa

    invoke-virtual {v0, p2, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onRewardVerifyAd(Ljava/lang/String;)V
    .locals 2

    .line 125
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u90a3\u79cd\u5e7f\u544a\u7684\u6fc0\u52b1\u6821\u9a8c"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 126
    iget-object v0, p0, Lcom/bianfeng/toponad/ToponAdInterface$1;->this$0:Lcom/bianfeng/toponad/ToponAdInterface;

    const v1, 0x1d8ae

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/toponad/ToponAdInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
