.class public Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;
.super Ljava/lang/Object;
.source "BaseAdapter.java"

# interfaces
.implements Lcom/huawei/hms/support/api/client/ResultCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/huawei/hms/adapter/BaseAdapter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "BaseRequestResultCallback"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/huawei/hms/support/api/client/ResultCallback<",
        "Lcom/huawei/hms/support/api/ResolveResult<",
        "Lcom/huawei/hms/adapter/CoreBaseResponse;",
        ">;>;"
    }
.end annotation


# instance fields
.field private isFirstRsp:Ljava/util/concurrent/atomic/AtomicBoolean;

.field final synthetic this$0:Lcom/huawei/hms/adapter/BaseAdapter;


# direct methods
.method public constructor <init>(Lcom/huawei/hms/adapter/BaseAdapter;)V
    .locals 1

    .line 1
    iput-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    new-instance p1, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x1

    invoke-direct {p1, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->isFirstRsp:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method private handleSolutionIntent(Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;Lcom/huawei/hms/adapter/CoreBaseResponse;)V
    .locals 2

    const-string v0, "BaseAdapter"

    const-string v1, "baseCallBack.onComplete"

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 2
    invoke-virtual {p2}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getPendingIntent()Landroid/app/PendingIntent;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 4
    invoke-virtual {p2}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getJsonHeader()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getJsonBody()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, v1, p2, v0}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onComplete(Ljava/lang/String;Ljava/lang/String;Landroid/os/Parcelable;)V

    return-void

    .line 8
    :cond_0
    invoke-virtual {p2}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 11
    invoke-virtual {p2}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getJsonHeader()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getJsonBody()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, v1, p2, v0}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onComplete(Ljava/lang/String;Ljava/lang/String;Landroid/os/Parcelable;)V

    return-void

    .line 16
    :cond_1
    invoke-virtual {p2}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getJsonHeader()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getJsonBody()Ljava/lang/String;

    move-result-object p2

    const/4 v1, 0x0

    invoke-interface {p1, v0, p2, v1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onComplete(Ljava/lang/String;Ljava/lang/String;Landroid/os/Parcelable;)V

    return-void
.end method


# virtual methods
.method public onResult(Lcom/huawei/hms/support/api/ResolveResult;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/huawei/hms/support/api/ResolveResult<",
            "Lcom/huawei/hms/adapter/CoreBaseResponse;",
            ">;)V"
        }
    .end annotation

    .line 2
    iget-object v0, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v0}, Lcom/huawei/hms/adapter/BaseAdapter;->access$000(Lcom/huawei/hms/adapter/BaseAdapter;)Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;

    move-result-object v0

    const-string v1, "BaseAdapter"

    if-nez v0, :cond_0

    const-string p1, "onResult baseCallBack null"

    .line 5
    invoke-static {v1, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    const/4 v2, -0x1

    if-nez p1, :cond_1

    const-string p1, "result null"

    .line 10
    invoke-static {v1, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 11
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1, v2}, Lcom/huawei/hms/adapter/BaseAdapter;->access$100(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onError(Ljava/lang/String;)V

    return-void

    .line 15
    :cond_1
    invoke-virtual {p1}, Lcom/huawei/hms/support/api/ResolveResult;->getValue()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/huawei/hms/adapter/CoreBaseResponse;

    if-nez p1, :cond_2

    const-string p1, "response null"

    .line 17
    invoke-static {v1, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 18
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1, v2}, Lcom/huawei/hms/adapter/BaseAdapter;->access$100(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onError(Ljava/lang/String;)V

    return-void

    .line 22
    :cond_2
    invoke-virtual {p1}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getJsonHeader()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    const-string p1, "jsonHeader null"

    .line 23
    invoke-static {v1, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 24
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1, v2}, Lcom/huawei/hms/adapter/BaseAdapter;->access$100(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onError(Ljava/lang/String;)V

    return-void

    .line 28
    :cond_3
    invoke-virtual {p1}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getJsonHeader()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v3}, Lcom/huawei/hms/adapter/BaseAdapter;->access$200(Lcom/huawei/hms/adapter/BaseAdapter;)Lcom/huawei/hms/common/internal/ResponseHeader;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/huawei/hms/utils/JsonUtil;->jsonToEntity(Ljava/lang/String;Lcom/huawei/hms/core/aidl/IMessageEntity;)Lcom/huawei/hms/core/aidl/IMessageEntity;

    .line 31
    iget-object v2, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->isFirstRsp:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v3, 0x1

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 32
    iget-object v2, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v2}, Lcom/huawei/hms/adapter/BaseAdapter;->access$300(Lcom/huawei/hms/adapter/BaseAdapter;)Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v4}, Lcom/huawei/hms/adapter/BaseAdapter;->access$200(Lcom/huawei/hms/adapter/BaseAdapter;)Lcom/huawei/hms/common/internal/ResponseHeader;

    move-result-object v4

    invoke-static {v2, v3, v4}, Lcom/huawei/hms/adapter/BaseAdapter;->access$400(Lcom/huawei/hms/adapter/BaseAdapter;Landroid/content/Context;Lcom/huawei/hms/common/internal/ResponseHeader;)V

    .line 35
    :cond_4
    iget-object v2, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v2}, Lcom/huawei/hms/adapter/BaseAdapter;->access$200(Lcom/huawei/hms/adapter/BaseAdapter;)Lcom/huawei/hms/common/internal/ResponseHeader;

    move-result-object v2

    invoke-virtual {v2}, Lcom/huawei/hms/common/internal/ResponseHeader;->getResolution()Ljava/lang/String;

    move-result-object v2

    const-string v3, "intent"

    .line 37
    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_b

    .line 38
    iget-object v2, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v2}, Lcom/huawei/hms/adapter/BaseAdapter;->access$500(Lcom/huawei/hms/adapter/BaseAdapter;)Landroid/app/Activity;

    move-result-object v2

    .line 39
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "activity is "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v2, :cond_a

    .line 40
    invoke-virtual {v2}, Landroid/app/Activity;->isFinishing()Z

    move-result v3

    if-eqz v3, :cond_5

    goto :goto_2

    .line 46
    :cond_5
    invoke-virtual {p1}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getPendingIntent()Landroid/app/PendingIntent;

    move-result-object v3

    const/16 v4, -0x9

    if-eqz v3, :cond_7

    .line 48
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1}, Lcom/huawei/hms/adapter/BaseAdapter;->access$300(Lcom/huawei/hms/adapter/BaseAdapter;)Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/huawei/hms/utils/Util;->isAvailableLibExist(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 49
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1, v2, v3}, Lcom/huawei/hms/adapter/BaseAdapter;->access$600(Lcom/huawei/hms/adapter/BaseAdapter;Landroid/app/Activity;Landroid/os/Parcelable;)V

    goto :goto_0

    .line 51
    :cond_6
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1, v4}, Lcom/huawei/hms/adapter/BaseAdapter;->access$100(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onError(Ljava/lang/String;)V

    :goto_0
    return-void

    .line 56
    :cond_7
    invoke-virtual {p1}, Lcom/huawei/hms/adapter/CoreBaseResponse;->getIntent()Landroid/content/Intent;

    move-result-object p1

    if-eqz p1, :cond_9

    .line 59
    iget-object v1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v1}, Lcom/huawei/hms/adapter/BaseAdapter;->access$300(Lcom/huawei/hms/adapter/BaseAdapter;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/huawei/hms/utils/Util;->isAvailableLibExist(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_8

    .line 60
    iget-object v0, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v0, v2, p1}, Lcom/huawei/hms/adapter/BaseAdapter;->access$600(Lcom/huawei/hms/adapter/BaseAdapter;Landroid/app/Activity;Landroid/os/Parcelable;)V

    goto :goto_1

    .line 62
    :cond_8
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1, v4}, Lcom/huawei/hms/adapter/BaseAdapter;->access$100(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onError(Ljava/lang/String;)V

    :goto_1
    return-void

    :cond_9
    const-string p1, "hasResolution is true but NO_SOLUTION"

    .line 67
    invoke-static {v1, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 68
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    const/4 v1, -0x4

    invoke-static {p1, v1}, Lcom/huawei/hms/adapter/BaseAdapter;->access$100(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onError(Ljava/lang/String;)V

    goto :goto_3

    :cond_a
    :goto_2
    const-string v2, "activity null"

    .line 69
    invoke-static {v1, v2}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 70
    invoke-direct {p0, v0, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->handleSolutionIntent(Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;Lcom/huawei/hms/adapter/CoreBaseResponse;)V

    return-void

    .line 98
    :cond_b
    invoke-direct {p0, v0, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->handleSolutionIntent(Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;Lcom/huawei/hms/adapter/CoreBaseResponse;)V

    :goto_3
    return-void
.end method

.method public bridge synthetic onResult(Ljava/lang/Object;)V
    .locals 0

    .line 1
    check-cast p1, Lcom/huawei/hms/support/api/ResolveResult;

    invoke-virtual {p0, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseRequestResultCallback;->onResult(Lcom/huawei/hms/support/api/ResolveResult;)V

    return-void
.end method
