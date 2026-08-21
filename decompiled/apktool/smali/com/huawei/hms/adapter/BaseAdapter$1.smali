.class Lcom/huawei/hms/adapter/BaseAdapter$1;
.super Ljava/lang/Object;
.source "BaseAdapter.java"

# interfaces
.implements Lcom/huawei/hms/adapter/sysobs/SystemObserver;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/huawei/hms/adapter/BaseAdapter;->initObserver()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/huawei/hms/adapter/BaseAdapter;


# direct methods
.method constructor <init>(Lcom/huawei/hms/adapter/BaseAdapter;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onNoticeResult(I)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public onSolutionResult(Landroid/content/Intent;Ljava/lang/String;)Z
    .locals 9

    .line 1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    const-string v2, "BaseAdapter"

    if-eqz v0, :cond_1

    const-string p1, "onSolutionResult but id is null"

    .line 3
    invoke-static {v2, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 5
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1}, Lcom/huawei/hms/adapter/BaseAdapter;->access$000(Lcom/huawei/hms/adapter/BaseAdapter;)Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;

    move-result-object p1

    if-nez p1, :cond_0

    const-string p1, "onSolutionResult baseCallBack null"

    .line 7
    invoke-static {v2, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    .line 11
    :cond_0
    iget-object p2, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    const/4 v0, -0x6

    invoke-static {p2, v0}, Lcom/huawei/hms/adapter/BaseAdapter;->access$100(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onError(Ljava/lang/String;)V

    return v1

    .line 16
    :cond_1
    iget-object v0, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v0}, Lcom/huawei/hms/adapter/BaseAdapter;->access$700(Lcom/huawei/hms/adapter/BaseAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v3, 0x0

    if-eqz v0, :cond_8

    .line 17
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onSolutionResult + id is :"

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 19
    iget-object p2, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p2}, Lcom/huawei/hms/adapter/BaseAdapter;->access$000(Lcom/huawei/hms/adapter/BaseAdapter;)Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;

    move-result-object p2

    if-nez p2, :cond_2

    const-string p1, "onResult baseCallBack null"

    .line 22
    invoke-static {v2, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return v1

    :cond_2
    const-wide/16 v4, 0x0

    if-nez p1, :cond_3

    const-string p1, "onSolutionResult but data is null"

    .line 28
    invoke-static {v2, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 29
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    const/4 v0, -0x7

    invoke-static {p1, v0}, Lcom/huawei/hms/adapter/BaseAdapter;->access$100(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    move-result-object p1

    .line 30
    iget-object v0, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v0}, Lcom/huawei/hms/adapter/BaseAdapter;->access$300(Lcom/huawei/hms/adapter/BaseAdapter;)Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v3}, Lcom/huawei/hms/adapter/BaseAdapter;->access$200(Lcom/huawei/hms/adapter/BaseAdapter;)Lcom/huawei/hms/common/internal/ResponseHeader;

    move-result-object v3

    invoke-static {v0, v2, v3, v4, v5}, Lcom/huawei/hms/adapter/BaseAdapter;->access$800(Lcom/huawei/hms/adapter/BaseAdapter;Landroid/content/Context;Lcom/huawei/hms/common/internal/ResponseHeader;J)V

    .line 31
    invoke-interface {p2, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onError(Ljava/lang/String;)V

    return v1

    :cond_3
    const-string v0, "kit_update_result"

    .line 35
    invoke-virtual {p1, v0}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_5

    .line 36
    invoke-virtual {p1, v0, v3}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    .line 37
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "kit_update_result is "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    if-ne p1, v1, :cond_4

    const-string p1, "kit update success,replay request"

    .line 39
    invoke-static {v2, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 40
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1}, Lcom/huawei/hms/adapter/BaseAdapter;->access$900(Lcom/huawei/hms/adapter/BaseAdapter;)V

    goto :goto_0

    :cond_4
    const-string v0, "kit update failed"

    .line 42
    invoke-static {v2, v0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 43
    iget-object v0, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v0, p1}, Lcom/huawei/hms/adapter/BaseAdapter;->access$1000(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    move-result-object p1

    const/16 v2, -0xa

    invoke-static {v0, v2, p1}, Lcom/huawei/hms/adapter/BaseAdapter;->access$1100(Lcom/huawei/hms/adapter/BaseAdapter;ILjava/lang/String;)Lcom/huawei/hms/common/internal/ResponseWrap;

    move-result-object p1

    .line 44
    invoke-virtual {p1}, Lcom/huawei/hms/common/internal/ResponseWrap;->toJson()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onError(Ljava/lang/String;)V

    :goto_0
    return v1

    :cond_5
    const-string v0, "onComplete for on activity result"

    .line 49
    invoke-static {v2, v0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "json_header"

    .line 50
    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "json_body"

    .line 51
    invoke-virtual {p1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "status_code"

    .line 53
    invoke-static {v0, v3}, Lcom/huawei/hms/utils/JsonUtil;->getInfoFromJsonobject(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    const-string v6, "error_code"

    .line 54
    invoke-static {v0, v6}, Lcom/huawei/hms/utils/JsonUtil;->getInfoFromJsonobject(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v6

    const-string v7, "HMS_FOREGROUND_RES_UI"

    .line 57
    invoke-virtual {p1, v7}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_6

    .line 58
    invoke-virtual {p1, v7}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v7, "uiDuration"

    .line 59
    invoke-static {p1, v7}, Lcom/huawei/hms/utils/JsonUtil;->getInfoFromJsonobject(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    .line 60
    instance-of v7, p1, Ljava/lang/Long;

    if-eqz v7, :cond_6

    .line 61
    check-cast p1, Ljava/lang/Long;

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    .line 65
    :cond_6
    instance-of p1, v3, Ljava/lang/Integer;

    if-eqz p1, :cond_7

    instance-of p1, v6, Ljava/lang/Integer;

    if-eqz p1, :cond_7

    .line 66
    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result p1

    .line 67
    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v3

    .line 68
    iget-object v6, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v6, v3}, Lcom/huawei/hms/adapter/BaseAdapter;->access$100(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    .line 69
    iget-object v3, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v3}, Lcom/huawei/hms/adapter/BaseAdapter;->access$200(Lcom/huawei/hms/adapter/BaseAdapter;)Lcom/huawei/hms/common/internal/ResponseHeader;

    move-result-object v3

    invoke-virtual {v3, p1}, Lcom/huawei/hms/common/internal/ResponseHeader;->setStatusCode(I)V

    .line 70
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1}, Lcom/huawei/hms/adapter/BaseAdapter;->access$300(Lcom/huawei/hms/adapter/BaseAdapter;)Landroid/content/Context;

    move-result-object v3

    iget-object v6, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v6}, Lcom/huawei/hms/adapter/BaseAdapter;->access$200(Lcom/huawei/hms/adapter/BaseAdapter;)Lcom/huawei/hms/common/internal/ResponseHeader;

    move-result-object v6

    invoke-static {p1, v3, v6, v4, v5}, Lcom/huawei/hms/adapter/BaseAdapter;->access$800(Lcom/huawei/hms/adapter/BaseAdapter;Landroid/content/Context;Lcom/huawei/hms/common/internal/ResponseHeader;J)V

    goto :goto_1

    .line 72
    :cond_7
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    const/4 v3, -0x8

    invoke-static {p1, v3}, Lcom/huawei/hms/adapter/BaseAdapter;->access$100(Lcom/huawei/hms/adapter/BaseAdapter;I)Ljava/lang/String;

    .line 73
    iget-object p1, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {p1}, Lcom/huawei/hms/adapter/BaseAdapter;->access$300(Lcom/huawei/hms/adapter/BaseAdapter;)Landroid/content/Context;

    move-result-object v3

    iget-object v6, p0, Lcom/huawei/hms/adapter/BaseAdapter$1;->this$0:Lcom/huawei/hms/adapter/BaseAdapter;

    invoke-static {v6}, Lcom/huawei/hms/adapter/BaseAdapter;->access$200(Lcom/huawei/hms/adapter/BaseAdapter;)Lcom/huawei/hms/common/internal/ResponseHeader;

    move-result-object v6

    invoke-static {p1, v3, v6, v4, v5}, Lcom/huawei/hms/adapter/BaseAdapter;->access$800(Lcom/huawei/hms/adapter/BaseAdapter;Landroid/content/Context;Lcom/huawei/hms/common/internal/ResponseHeader;J)V

    :goto_1
    const/4 p1, 0x0

    .line 76
    invoke-interface {p2, v0, v2, p1}, Lcom/huawei/hms/adapter/BaseAdapter$BaseCallBack;->onComplete(Ljava/lang/String;Ljava/lang/String;Landroid/os/Parcelable;)V

    return v1

    :cond_8
    return v3
.end method

.method public onUpdateResult(I)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method
