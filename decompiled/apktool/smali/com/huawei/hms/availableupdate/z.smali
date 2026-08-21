.class public Lcom/huawei/hms/availableupdate/z;
.super Lcom/huawei/hms/availableupdate/p;
.source "HiappWizard.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Lcom/huawei/hms/availableupdate/p;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Intent;)V
    .locals 4

    .line 5
    invoke-virtual {p0}, Lcom/huawei/hms/availableupdate/p;->b()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    const/high16 v1, 0x10000

    invoke-virtual {v0, p1, v1}, Landroid/content/pm/PackageManager;->queryIntentActivities(Landroid/content/Intent;I)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 7
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    .line 8
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const-string v2, "com.huawei.appmarket.tv"

    .line 9
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-string v2, "com.huawei.appmarket.car"

    .line 10
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-string v2, "com.huawei.appmarket"

    .line 11
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 14
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x1

    if-ne v2, v3, :cond_0

    return-void

    .line 18
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    .line 19
    check-cast v2, Landroid/content/pm/ResolveInfo;

    .line 20
    iget-object v3, v2, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    iget-object v3, v3, Landroid/content/pm/ActivityInfo;->packageName:Ljava/lang/String;

    invoke-interface {v1, v3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 22
    iget-object v0, v2, Landroid/content/pm/ResolveInfo;->activityInfo:Landroid/content/pm/ActivityInfo;

    iget-object v0, v0, Landroid/content/pm/ActivityInfo;->packageName:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    :cond_2
    return-void
.end method

.method public a(Lcom/huawei/hms/availableupdate/q;)V
    .locals 2

    const-string v0, "HiappWizard"

    const-string v1, "Enter onCancel."

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 3
    instance-of p1, p1, Lcom/huawei/hms/availableupdate/a0;

    if-eqz p1, :cond_0

    .line 4
    invoke-virtual {p0}, Lcom/huawei/hms/availableupdate/z;->d()V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/Class;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Lcom/huawei/hms/availableupdate/q;",
            ">;)V"
        }
    .end annotation

    .line 23
    invoke-virtual {p0}, Lcom/huawei/hms/availableupdate/p;->a()V

    .line 25
    :try_start_0
    invoke-virtual {p1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/huawei/hms/availableupdate/q;

    .line 27
    iget-object v0, p0, Lcom/huawei/hms/availableupdate/p;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    instance-of v0, p1, Lcom/huawei/hms/availableupdate/a0;

    if-eqz v0, :cond_0

    const-string v0, "hms_update_title"

    .line 29
    invoke-static {v0}, Lcom/huawei/hms/utils/ResourceLoaderUtil;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/huawei/hms/availableupdate/p;->h:Ljava/lang/String;

    .line 30
    move-object v0, p1

    check-cast v0, Lcom/huawei/hms/availableupdate/a0;

    iget-object v1, p0, Lcom/huawei/hms/availableupdate/p;->h:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/huawei/hms/availableupdate/a0;->a(Ljava/lang/String;)V

    .line 33
    :cond_0
    invoke-virtual {p1, p0}, Lcom/huawei/hms/availableupdate/q;->a(Lcom/huawei/hms/availableupdate/p;)V

    .line 34
    iput-object p1, p0, Lcom/huawei/hms/availableupdate/p;->d:Lcom/huawei/hms/availableupdate/q;
    :try_end_0
    .catch Ljava/lang/InstantiationException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/IllegalStateException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    goto :goto_0

    :catch_1
    move-exception p1

    goto :goto_0

    :catch_2
    move-exception p1

    .line 36
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "In showDialog, Failed to show the dialog."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "HiappWizard"

    invoke-static {v0, p1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public b(Lcom/huawei/hms/availableupdate/q;)V
    .locals 2

    const-string v0, "HiappWizard"

    const-string v1, "Enter onDoWork."

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 3
    instance-of v0, p1, Lcom/huawei/hms/availableupdate/a0;

    if-eqz v0, :cond_1

    .line 4
    invoke-virtual {p1}, Lcom/huawei/hms/availableupdate/q;->b()V

    .line 5
    invoke-virtual {p0}, Lcom/huawei/hms/availableupdate/z;->c()Z

    move-result p1

    if-nez p1, :cond_1

    const/4 p1, 0x0

    .line 6
    invoke-virtual {p0, p1}, Lcom/huawei/hms/availableupdate/p;->a(Z)Z

    move-result p1

    const/16 v0, 0x8

    if-nez p1, :cond_0

    .line 7
    iget p1, p0, Lcom/huawei/hms/availableupdate/p;->f:I

    invoke-virtual {p0, v0, p1}, Lcom/huawei/hms/availableupdate/p;->c(II)V

    goto :goto_0

    .line 9
    :cond_0
    iget p1, p0, Lcom/huawei/hms/availableupdate/p;->f:I

    invoke-virtual {p0, v0, p1}, Lcom/huawei/hms/availableupdate/p;->a(II)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final c()Z
    .locals 8

    const-string v0, "HiappWizard"

    .line 1
    invoke-virtual {p0}, Lcom/huawei/hms/availableupdate/p;->b()Landroid/app/Activity;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    .line 2
    invoke-virtual {v1}, Landroid/app/Activity;->isFinishing()Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_0

    .line 6
    :cond_0
    iget-object v3, p0, Lcom/huawei/hms/availableupdate/p;->g:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    return v2

    .line 11
    :cond_1
    :try_start_0
    new-instance v3, Landroid/content/Intent;

    invoke-direct {v3}, Landroid/content/Intent;-><init>()V

    const-string v4, "com.huawei.appmarket.intent.action.AppDetail"

    .line 12
    invoke-virtual {v3, v4}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;
    :try_end_0
    .catch Landroid/content/ActivityNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    const-string v4, "APP_PACKAGENAME"

    .line 14
    :try_start_1
    iget-object v5, p0, Lcom/huawei/hms/availableupdate/p;->g:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 16
    invoke-static {}, Lcom/huawei/hms/android/SystemUtils;->isTVDevice()Z

    move-result v4

    const/4 v5, 0x1

    if-eqz v4, :cond_2

    .line 17
    new-instance v4, Lcom/huawei/hms/utils/PackageManagerHelper;

    invoke-direct {v4, v1}, Lcom/huawei/hms/utils/PackageManagerHelper;-><init>(Landroid/content/Context;)V

    const-string v6, "com.hisilicon.android.hiRMService"

    .line 19
    invoke-virtual {v4, v6}, Lcom/huawei/hms/utils/PackageManagerHelper;->getPackageVersionCode(Ljava/lang/String;)I

    move-result v4

    .line 20
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "version "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v6}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    if-ne v4, v5, :cond_2

    const-string v4, "startActivity"

    .line 24
    invoke-static {v0, v4}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/high16 v4, 0x10000000

    .line 25
    invoke-virtual {v3, v4}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 27
    invoke-virtual {p0, v3}, Lcom/huawei/hms/availableupdate/z;->a(Landroid/content/Intent;)V

    .line 28
    invoke-virtual {v1, v3}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    return v5

    :cond_2
    const-string v4, "startActivityForResult"

    .line 32
    invoke-static {v0, v4}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 36
    invoke-virtual {p0, v3}, Lcom/huawei/hms/availableupdate/z;->a(Landroid/content/Intent;)V

    .line 37
    invoke-virtual {p0}, Lcom/huawei/hms/availableupdate/z;->getRequestCode()I

    move-result v4

    invoke-virtual {v1, v3, v4}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V
    :try_end_1
    .catch Landroid/content/ActivityNotFoundException; {:try_start_1 .. :try_end_1} :catch_0

    return v5

    :catch_0
    const-string v1, "can not open hiapp"

    .line 39
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return v2
.end method

.method public d()V
    .locals 2

    .line 1
    iget v0, p0, Lcom/huawei/hms/availableupdate/p;->f:I

    const/16 v1, 0xd

    invoke-virtual {p0, v1, v0}, Lcom/huawei/hms/availableupdate/p;->c(II)V

    return-void
.end method

.method public getRequestCode()I
    .locals 1

    const/16 v0, 0x7d5

    return v0
.end method

.method public onBridgeActivityCreate(Landroid/app/Activity;)V
    .locals 1

    .line 1
    invoke-super {p0, p1}, Lcom/huawei/hms/availableupdate/p;->onBridgeActivityCreate(Landroid/app/Activity;)V

    .line 3
    iget-object p1, p0, Lcom/huawei/hms/availableupdate/p;->c:Lcom/huawei/hms/update/ui/UpdateBean;

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x5

    .line 7
    iput v0, p0, Lcom/huawei/hms/availableupdate/p;->f:I

    .line 9
    invoke-virtual {p1}, Lcom/huawei/hms/update/ui/UpdateBean;->isNeedConfirm()Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/huawei/hms/availableupdate/p;->h:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 10
    const-class p1, Lcom/huawei/hms/availableupdate/a0;

    invoke-virtual {p0, p1}, Lcom/huawei/hms/availableupdate/z;->a(Ljava/lang/Class;)V

    goto :goto_0

    .line 12
    :cond_1
    invoke-virtual {p0}, Lcom/huawei/hms/availableupdate/z;->c()Z

    move-result p1

    if-nez p1, :cond_3

    const/4 p1, 0x0

    .line 14
    invoke-virtual {p0, p1}, Lcom/huawei/hms/availableupdate/p;->a(Z)Z

    move-result p1

    const/16 v0, 0x8

    if-nez p1, :cond_2

    .line 15
    iget p1, p0, Lcom/huawei/hms/availableupdate/p;->f:I

    invoke-virtual {p0, v0, p1}, Lcom/huawei/hms/availableupdate/p;->c(II)V

    goto :goto_0

    .line 17
    :cond_2
    iget p1, p0, Lcom/huawei/hms/availableupdate/p;->f:I

    invoke-virtual {p0, v0, p1}, Lcom/huawei/hms/availableupdate/p;->a(II)V

    :cond_3
    :goto_0
    return-void
.end method

.method public onBridgeActivityDestroy()V
    .locals 0

    .line 1
    invoke-super {p0}, Lcom/huawei/hms/availableupdate/p;->onBridgeActivityDestroy()V

    return-void
.end method

.method public onBridgeActivityResult(IILandroid/content/Intent;)Z
    .locals 1

    .line 1
    iget-boolean v0, p0, Lcom/huawei/hms/availableupdate/p;->e:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/huawei/hms/availableupdate/p;->b:Lcom/huawei/hms/activity/IBridgeActivityDelegate;

    if-eqz v0, :cond_0

    .line 2
    invoke-interface {v0, p1, p2, p3}, Lcom/huawei/hms/activity/IBridgeActivityDelegate;->onBridgeActivityResult(IILandroid/content/Intent;)Z

    move-result p1

    return p1

    .line 5
    :cond_0
    iget p2, p0, Lcom/huawei/hms/availableupdate/p;->f:I

    const/4 p3, 0x5

    const/4 v0, 0x0

    if-ne p2, p3, :cond_2

    invoke-virtual {p0}, Lcom/huawei/hms/availableupdate/z;->getRequestCode()I

    move-result p2

    if-ne p1, p2, :cond_2

    .line 6
    iget-object p1, p0, Lcom/huawei/hms/availableupdate/p;->g:Ljava/lang/String;

    iget p2, p0, Lcom/huawei/hms/availableupdate/p;->i:I

    invoke-virtual {p0, p1, p2}, Lcom/huawei/hms/availableupdate/p;->a(Ljava/lang/String;I)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 8
    iget p1, p0, Lcom/huawei/hms/availableupdate/p;->f:I

    invoke-virtual {p0, v0, p1}, Lcom/huawei/hms/availableupdate/p;->c(II)V

    goto :goto_0

    .line 11
    :cond_1
    iget p1, p0, Lcom/huawei/hms/availableupdate/p;->f:I

    const/16 p2, 0x8

    invoke-virtual {p0, p2, p1}, Lcom/huawei/hms/availableupdate/p;->c(II)V

    :goto_0
    const/4 p1, 0x1

    return p1

    :cond_2
    return v0
.end method

.method public onBridgeConfigurationChanged()V
    .locals 0

    .line 1
    invoke-super {p0}, Lcom/huawei/hms/availableupdate/p;->onBridgeConfigurationChanged()V

    return-void
.end method

.method public onKeyUp(ILandroid/view/KeyEvent;)V
    .locals 1

    .line 1
    iget-boolean v0, p0, Lcom/huawei/hms/availableupdate/p;->e:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/huawei/hms/availableupdate/p;->b:Lcom/huawei/hms/activity/IBridgeActivityDelegate;

    if-eqz v0, :cond_0

    .line 2
    invoke-interface {v0, p1, p2}, Lcom/huawei/hms/activity/IBridgeActivityDelegate;->onKeyUp(ILandroid/view/KeyEvent;)V

    return-void

    :cond_0
    const/4 p2, 0x4

    if-ne p2, p1, :cond_1

    const-string p1, "HiappWizard"

    const-string p2, "In onKeyUp, Call finish."

    .line 7
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 9
    invoke-virtual {p0}, Lcom/huawei/hms/availableupdate/p;->b()Landroid/app/Activity;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 10
    invoke-virtual {p1}, Landroid/app/Activity;->isFinishing()Z

    move-result p2

    if-nez p2, :cond_1

    const/4 p2, 0x0

    const/4 v0, 0x0

    .line 11
    invoke-virtual {p1, p2, v0}, Landroid/app/Activity;->setResult(ILandroid/content/Intent;)V

    .line 12
    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    :cond_1
    return-void
.end method
