.class public Lcom/ss/android/downloadlib/activity/JumpKllkActivity;
.super Lcom/ss/android/downloadlib/activity/TTDelegateActivity;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onPause()V
    .locals 0

    .line 40
    invoke-super {p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->onPause()V

    .line 41
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void
.end method

.method protected rg()V
    .locals 6

    .line 18
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/activity/JumpKllkActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-nez v0, :cond_0

    .line 19
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v0

    const-string v1, "handleIntent is null"

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    .line 20
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    .line 23
    :cond_0
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/activity/JumpKllkActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "p"

    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 24
    invoke-virtual {p0}, Lcom/ss/android/downloadlib/activity/JumpKllkActivity;->getIntent()Landroid/content/Intent;

    move-result-object v1

    const-wide/16 v2, 0x0

    const-string v4, "id"

    invoke-virtual {v1, v4, v2, v3}, Landroid/content/Intent;->getLongExtra(Ljava/lang/String;J)J

    move-result-wide v4

    .line 25
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    cmp-long v1, v4, v2

    if-nez v1, :cond_2

    .line 26
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v1

    const-string v2, "getPackage or id is null"

    invoke-virtual {v1, v2}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    .line 27
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    .line 29
    :cond_2
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v1

    const/4 v2, 0x0

    const-string v3, "ab"

    .line 30
    invoke-virtual {v1, v3, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    const/4 v3, 0x1

    if-ne v1, v3, :cond_3

    move v2, v3

    .line 31
    :cond_3
    invoke-static {p0, v0, v4, v5, v2}, Lcom/ss/android/downloadlib/utils/fw;->rg(Landroid/content/Context;Ljava/lang/String;JZ)V

    if-eq v1, v3, :cond_4

    .line 34
    invoke-static {p0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    :cond_4
    return-void
.end method
