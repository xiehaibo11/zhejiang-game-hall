.class public Lcom/huawei/hms/adapter/ui/UpdateAdapter;
.super Ljava/lang/Object;
.source "UpdateAdapter.java"

# interfaces
.implements Lcom/huawei/hms/activity/IBridgeActivityDelegate;


# instance fields
.field public a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field public b:I

.field public c:Lcom/huawei/hms/update/ui/UpdateBean;

.field public d:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 1
    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->b()Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 2
    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 5
    :cond_0
    invoke-virtual {v0}, Landroid/app/Activity;->finish()V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;I)Z
    .locals 3

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    .line 6
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    if-nez p3, :cond_0

    goto :goto_0

    .line 10
    :cond_0
    new-instance v1, Lcom/huawei/hms/utils/PackageManagerHelper;

    invoke-direct {v1, p1}, Lcom/huawei/hms/utils/PackageManagerHelper;-><init>(Landroid/content/Context;)V

    .line 11
    invoke-virtual {v1, p2}, Lcom/huawei/hms/utils/PackageManagerHelper;->getPackageStates(Ljava/lang/String;)Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    move-result-object p1

    .line 12
    sget-object v2, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->NOT_INSTALLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    invoke-virtual {v2, p1}, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->equals(Ljava/lang/Object;)Z

    move-result p1

    const/4 v2, 0x1

    if-eqz p1, :cond_1

    return v2

    .line 16
    :cond_1
    invoke-virtual {v1, p2}, Lcom/huawei/hms/utils/PackageManagerHelper;->getPackageVersionCode(Ljava/lang/String;)I

    move-result p1

    if-ge p1, p3, :cond_2

    move v0, v2

    :cond_2
    :goto_0
    return v0
.end method

.method public final b()Landroid/app/Activity;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->a:Ljava/lang/ref/WeakReference;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 4
    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    return-object v0
.end method

.method public final c()V
    .locals 2

    .line 1
    invoke-static {}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->getInstance()Lcom/huawei/hms/adapter/sysobs/SystemManager;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->notifyUpdateResult(I)V

    .line 2
    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->a()V

    return-void
.end method

.method public getRequestCode()I
    .locals 1

    const/16 v0, 0x3e9

    return v0
.end method

.method public onBridgeActivityCreate(Landroid/app/Activity;)V
    .locals 6

    .line 1
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->a:Ljava/lang/ref/WeakReference;

    .line 2
    sget-object v0, Lcom/huawei/hms/availableupdate/a;->b:Lcom/huawei/hms/availableupdate/a;

    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->b()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/huawei/hms/availableupdate/a;->a(Landroid/app/Activity;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 5
    :cond_0
    invoke-virtual {p1}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-nez v0, :cond_1

    .line 7
    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->c()V

    return-void

    :cond_1
    const/4 v1, 0x0

    const-string v2, "update_version"

    .line 11
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v2

    iput v2, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->b:I

    if-nez v2, :cond_2

    .line 14
    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->c()V

    return-void

    :cond_2
    const-string v2, "new_update"

    .line 19
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    const/16 v1, 0x3e9

    const-string v2, "UpdateAdapter"

    if-eqz v0, :cond_3

    const-string v0, "4.0 framework HMSCore upgrade process"

    .line 20
    invoke-static {v2, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 21
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/huawei/hms/utils/HMSPackageManager;->getHMSPackageName()Ljava/lang/String;

    move-result-object v0

    .line 22
    new-instance v2, Landroid/content/ComponentName;

    const-string v3, "com.huawei.hms.fwksdk.stub.UpdateStubActivity"

    invoke-direct {v2, v0, v3}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 24
    new-instance v3, Landroid/content/Intent;

    invoke-direct {v3}, Landroid/content/Intent;-><init>()V

    .line 26
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v4

    const-string v5, "kpms_key_caller_packagename"

    .line 27
    invoke-virtual {v3, v5, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v4, "kitUpdatePackageName"

    .line 29
    invoke-virtual {v3, v4, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 30
    invoke-virtual {v3, v2}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 31
    invoke-virtual {p1, v3, v1}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V

    return-void

    .line 35
    :cond_3
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/huawei/hms/utils/HMSPackageManager;->getHMSPackageName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->d:Ljava/lang/String;

    .line 36
    new-instance v0, Lcom/huawei/hms/update/ui/UpdateBean;

    invoke-direct {v0}, Lcom/huawei/hms/update/ui/UpdateBean;-><init>()V

    const/4 v3, 0x1

    .line 37
    invoke-virtual {v0, v3}, Lcom/huawei/hms/update/ui/UpdateBean;->setHmsOrApkUpgrade(Z)V

    .line 38
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "target HMS Core packageName is "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->d:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 39
    iget-object v3, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->d:Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/huawei/hms/update/ui/UpdateBean;->setClientPackageName(Ljava/lang/String;)V

    .line 40
    iget v3, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->b:I

    invoke-virtual {v0, v3}, Lcom/huawei/hms/update/ui/UpdateBean;->setClientVersionCode(I)V

    const-string v3, "C10132067"

    .line 41
    invoke-virtual {v0, v3}, Lcom/huawei/hms/update/ui/UpdateBean;->setClientAppId(Ljava/lang/String;)V

    .line 42
    invoke-static {}, Lcom/huawei/hms/utils/ResourceLoaderUtil;->getmContext()Landroid/content/Context;

    move-result-object v3

    if-nez v3, :cond_4

    if-eqz p1, :cond_4

    .line 44
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/huawei/hms/utils/ResourceLoaderUtil;->setmContext(Landroid/content/Context;)V

    :cond_4
    const-string v3, "hms_update_title"

    .line 47
    invoke-static {v3}, Lcom/huawei/hms/utils/ResourceLoaderUtil;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/huawei/hms/update/ui/UpdateBean;->setClientAppName(Ljava/lang/String;)V

    .line 48
    iput-object v0, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->c:Lcom/huawei/hms/update/ui/UpdateBean;

    const-string v3, "old framework HMSCore upgrade process"

    .line 50
    invoke-static {v2, v3}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 51
    invoke-static {p1, v1, v0}, Lcom/huawei/hms/update/manager/UpdateManager;->startUpdate(Landroid/app/Activity;ILcom/huawei/hms/update/ui/UpdateBean;)V

    const/4 p1, 0x0

    .line 52
    iput-object p1, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->c:Lcom/huawei/hms/update/ui/UpdateBean;

    return-void
.end method

.method public onBridgeActivityDestroy()V
    .locals 2

    const-string v0, "UpdateAdapter"

    const-string v1, "onBridgeActivityDestroy"

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 2
    sget-object v0, Lcom/huawei/hms/availableupdate/a;->b:Lcom/huawei/hms/availableupdate/a;

    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->b()Landroid/app/Activity;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/huawei/hms/availableupdate/a;->b(Landroid/app/Activity;)V

    const/4 v0, 0x0

    .line 3
    iput-object v0, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->a:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public onBridgeActivityResult(IILandroid/content/Intent;)Z
    .locals 6

    .line 1
    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->getRequestCode()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-eq p1, v0, :cond_0

    .line 2
    iput-object v2, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->c:Lcom/huawei/hms/update/ui/UpdateBean;

    return v1

    :cond_0
    const-string p1, "UpdateAdapter"

    const-string v0, "onBridgeActivityResult"

    .line 5
    invoke-static {p1, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v0, 0x4be

    const/4 v3, 0x1

    if-ne p2, v0, :cond_2

    const-string v0, "Enter update escape route"

    .line 8
    invoke-static {p1, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 9
    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->b()Landroid/app/Activity;

    move-result-object v0

    if-nez v0, :cond_1

    const-string p2, "bridgeActivity is null, update escape failed "

    .line 11
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 12
    iput-object v2, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->c:Lcom/huawei/hms/update/ui/UpdateBean;

    return v3

    .line 16
    :cond_1
    iget-object v4, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->c:Lcom/huawei/hms/update/ui/UpdateBean;

    const/16 v5, 0x3e9

    invoke-static {v0, v5, v4}, Lcom/huawei/hms/update/manager/UpdateManager;->startUpdate(Landroid/app/Activity;ILcom/huawei/hms/update/ui/UpdateBean;)V

    .line 17
    iput-object v2, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->c:Lcom/huawei/hms/update/ui/UpdateBean;

    :cond_2
    const/4 v0, -0x1

    const/16 v4, 0xd

    if-ne p2, v0, :cond_7

    if-eqz p3, :cond_b

    const-string p2, "kit_update_result"

    .line 23
    invoke-virtual {p3, p2, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p2

    if-ne p2, v3, :cond_3

    const-string p2, "new framework update process,Error resolved successfully!"

    .line 24
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 25
    invoke-static {}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->getInstance()Lcom/huawei/hms/adapter/sysobs/SystemManager;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->notifyUpdateResult(I)V

    .line 26
    iput-object v2, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->c:Lcom/huawei/hms/update/ui/UpdateBean;

    .line 27
    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->a()V

    return v3

    :cond_3
    const-string p2, "intent.extra.RESULT"

    .line 31
    invoke-virtual {p3, p2, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p2

    if-nez p2, :cond_4

    const-string p2, "Error resolved successfully!"

    .line 34
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 35
    invoke-static {}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->getInstance()Lcom/huawei/hms/adapter/sysobs/SystemManager;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->notifyUpdateResult(I)V

    goto/16 :goto_0

    :cond_4
    if-ne p2, v4, :cond_5

    const-string p2, "Resolve error process canceled by user!"

    .line 37
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 38
    invoke-static {}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->getInstance()Lcom/huawei/hms/adapter/sysobs/SystemManager;

    move-result-object p1

    invoke-virtual {p1, v4}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->notifyUpdateResult(I)V

    goto :goto_0

    :cond_5
    const/16 p3, 0x8

    if-ne p2, p3, :cond_6

    const-string p2, "Internal error occurred, recommended retry."

    .line 40
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 41
    invoke-static {}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->getInstance()Lcom/huawei/hms/adapter/sysobs/SystemManager;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->notifyUpdateResult(I)V

    goto :goto_0

    :cond_6
    const-string p3, "Other error codes."

    .line 43
    invoke-static {p1, p3}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 44
    invoke-static {}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->getInstance()Lcom/huawei/hms/adapter/sysobs/SystemManager;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->notifyUpdateResult(I)V

    goto :goto_0

    :cond_7
    if-nez p2, :cond_a

    const-string p2, "Activity.RESULT_CANCELED"

    .line 48
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 49
    iput-object v2, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->c:Lcom/huawei/hms/update/ui/UpdateBean;

    .line 50
    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->b()Landroid/app/Activity;

    move-result-object p2

    if-nez p2, :cond_8

    return v3

    .line 55
    :cond_8
    invoke-virtual {p2}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    invoke-static {p3}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object p3

    invoke-virtual {p3}, Lcom/huawei/hms/utils/HMSPackageManager;->getHMSPackageName()Ljava/lang/String;

    move-result-object p3

    .line 56
    iget v0, p0, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->b:I

    invoke-virtual {p0, p2, p3, v0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->a(Landroid/content/Context;Ljava/lang/String;I)Z

    move-result p2

    if-eqz p2, :cond_9

    const-string p2, "Resolve error, process canceled by user clicking back button!"

    .line 57
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 58
    invoke-static {}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->getInstance()Lcom/huawei/hms/adapter/sysobs/SystemManager;

    move-result-object p1

    invoke-virtual {p1, v4}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->notifyUpdateResult(I)V

    goto :goto_0

    .line 60
    :cond_9
    invoke-static {}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->getInstance()Lcom/huawei/hms/adapter/sysobs/SystemManager;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->notifyUpdateResult(I)V

    goto :goto_0

    :cond_a
    if-ne p2, v3, :cond_b

    .line 63
    invoke-static {}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->getInstance()Lcom/huawei/hms/adapter/sysobs/SystemManager;

    move-result-object p1

    const/16 p2, 0x1c

    invoke-virtual {p1, p2}, Lcom/huawei/hms/adapter/sysobs/SystemManager;->notifyUpdateResult(I)V

    .line 66
    :cond_b
    :goto_0
    invoke-virtual {p0}, Lcom/huawei/hms/adapter/ui/UpdateAdapter;->a()V

    return v3
.end method

.method public onBridgeConfigurationChanged()V
    .locals 2

    const-string v0, "UpdateAdapter"

    const-string v1, "onBridgeConfigurationChanged"

    .line 1
    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onKeyUp(ILandroid/view/KeyEvent;)V
    .locals 0

    const-string p1, "UpdateAdapter"

    const-string p2, "On key up when resolve conn error"

    .line 1
    invoke-static {p1, p2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
