.class public abstract Lcom/huawei/hms/api/HuaweiMobileServicesUtil;
.super Ljava/lang/Object;
.source "HuaweiMobileServicesUtil.java"


# static fields
.field public static final HMS_ERROR_DIALOG:Ljava/lang/String; = "HuaweiMobileServicesErrorDialog"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getErrorDialog(ILandroid/app/Activity;I)Landroid/app/Dialog;
    .locals 2

    .line 1
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, p0, p2, v1}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getErrorDialog(Landroid/app/Activity;IILandroid/content/DialogInterface$OnCancelListener;)Landroid/app/Dialog;

    move-result-object p0

    return-object p0
.end method

.method public static getErrorDialog(ILandroid/app/Activity;ILandroid/content/DialogInterface$OnCancelListener;)Landroid/app/Dialog;
    .locals 1

    .line 2
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    invoke-virtual {v0, p1, p0, p2, p3}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getErrorDialog(Landroid/app/Activity;IILandroid/content/DialogInterface$OnCancelListener;)Landroid/app/Dialog;

    move-result-object p0

    return-object p0
.end method

.method public static getErrorString(I)Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getErrorString(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getOpenSourceSoftwareLicenseInfo(Landroid/content/Context;)Ljava/lang/String;
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-string p0, ""

    return-object p0
.end method

.method public static getRemoteContext(Landroid/content/Context;)Landroid/content/Context;
    .locals 2

    .line 1
    :try_start_0
    invoke-static {p0}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/huawei/hms/utils/HMSPackageManager;->getHMSPackageName()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->createPackageContext(Ljava/lang/String;I)Landroid/content/Context;

    move-result-object p0
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getRemoteResource(Landroid/content/Context;)Landroid/content/res/Resources;
    .locals 1

    .line 1
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-static {p0}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object p0

    invoke-virtual {p0}, Lcom/huawei/hms/utils/HMSPackageManager;->getHMSPackageName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/content/pm/PackageManager;->getResourcesForApplication(Ljava/lang/String;)Landroid/content/res/Resources;

    move-result-object p0
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static isHuaweiMobileServicesAvailable(Landroid/content/Context;)I
    .locals 1

    .line 65
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/huawei/hms/api/HuaweiApiAvailability;->isHuaweiMobileServicesAvailable(Landroid/content/Context;)I

    move-result p0

    return p0
.end method

.method public static isHuaweiMobileServicesAvailable(Landroid/content/Context;I)I
    .locals 11

    const-string v0, "context must not be null."

    .line 1
    invoke-static {p0, v0}, Lcom/huawei/hms/utils/Checker;->checkNonNull(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    .line 4
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-ge v0, v1, :cond_0

    const/16 p0, 0x15

    return p0

    .line 8
    :cond_0
    new-instance v0, Lcom/huawei/hms/utils/PackageManagerHelper;

    invoke-direct {v0, p0}, Lcom/huawei/hms/utils/PackageManagerHelper;-><init>(Landroid/content/Context;)V

    .line 9
    invoke-static {p0}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object v1

    invoke-virtual {v1}, Lcom/huawei/hms/utils/HMSPackageManager;->getHMSPackageName()Ljava/lang/String;

    move-result-object v1

    .line 10
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "hmsPackageName is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "HuaweiMobileServicesUtil"

    invoke-static {v3, v2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 11
    invoke-static {p0}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object v2

    .line 12
    invoke-virtual {v2}, Lcom/huawei/hms/utils/HMSPackageManager;->getHMSPackageStates()Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    move-result-object v2

    .line 14
    sget-object v4, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->NOT_INSTALLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    invoke-virtual {v4, v2}, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    const-string p0, "HMS is not installed"

    .line 15
    invoke-static {v3, p0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    .line 20
    :cond_1
    invoke-static {p0}, Lcom/huawei/hms/utils/ReadApkFileUtil;->getHmsPath(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    .line 21
    sget v5, Lcom/huawei/hms/android/HwBuildEx$VERSION;->EMUI_SDK_INT:I

    const/4 v6, 0x5

    const/4 v7, 0x2

    const-string v8, "B92825C2BD5D6D6D1E7F39EECD17843B7D9016F611136B75441BC6F4D3F00F05"

    const/16 v9, 0x9

    const-string v10, "3517262215D8D3008CBF888750B6418EDC4D562AC33ED6874E0D73ABA667BC3C"

    if-ge v5, v6, :cond_3

    invoke-virtual {v0, v1}, Lcom/huawei/hms/utils/PackageManagerHelper;->getPackageVersionCode(Ljava/lang/String;)I

    move-result v5

    const v6, 0x138ce20

    if-ge v5, v6, :cond_3

    invoke-static {v4}, Lcom/huawei/hms/utils/ReadApkFileUtil;->isCertFound(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 23
    invoke-virtual {v0, v1}, Lcom/huawei/hms/utils/PackageManagerHelper;->getPackageSignature(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 24
    invoke-virtual {v8, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 25
    invoke-virtual {v10, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 26
    invoke-virtual {v10, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_2

    return v9

    :cond_2
    return v7

    .line 35
    :cond_3
    sget-object v4, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->SPOOF:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    invoke-virtual {v4, v2}, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    const-string p0, "HMS is spoofed"

    .line 36
    invoke-static {v3, p0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return v9

    .line 41
    :cond_4
    sget-object v4, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->DISABLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    invoke-virtual {v4, v2}, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_5

    const-string p0, "HMS is disabled"

    .line 42
    invoke-static {v3, p0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x3

    return p0

    .line 47
    :cond_5
    sget-object v4, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->NOT_INSTALLED:Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;

    invoke-virtual {v4, v2}, Lcom/huawei/hms/utils/PackageManagerHelper$PackageStates;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_6

    .line 49
    invoke-virtual {v0, v1}, Lcom/huawei/hms/utils/PackageManagerHelper;->getPackageSignature(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 50
    invoke-virtual {v8, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_6

    .line 51
    invoke-virtual {v10, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_6

    .line 52
    invoke-virtual {v10, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    return v9

    .line 58
    :cond_6
    invoke-static {p0}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/huawei/hms/utils/HMSPackageManager;->getHmsVersionCode()I

    move-result v0

    .line 60
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "connect versionCode:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 63
    invoke-static {p0}, Lcom/huawei/hms/utils/HMSPackageManager;->getInstance(Landroid/content/Context;)Lcom/huawei/hms/utils/HMSPackageManager;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/huawei/hms/utils/HMSPackageManager;->isApkUpdateNecessary(I)Z

    move-result p0

    if-eqz p0, :cond_7

    const-string p0, "The current version does not meet the minimum version requirements"

    .line 64
    invoke-static {v3, p0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    return v7

    :cond_7
    const/4 p0, 0x0

    return p0
.end method

.method public static isUserRecoverableError(I)Z
    .locals 1

    .line 1
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/huawei/hms/api/HuaweiApiAvailability;->isUserResolvableError(I)Z

    move-result p0

    return p0
.end method

.method public static popupErrDlgFragment(ILandroid/app/Activity;ILandroid/content/DialogInterface$OnCancelListener;)Z
    .locals 1

    .line 1
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    .line 2
    invoke-virtual {v0, p1, p0, p2, p3}, Lcom/huawei/hms/api/HuaweiApiAvailability;->showErrorDialogFragment(Landroid/app/Activity;IILandroid/content/DialogInterface$OnCancelListener;)Z

    move-result p0

    return p0
.end method

.method public static popupErrDlgFragment(ILandroid/app/Activity;Landroid/app/Fragment;ILandroid/content/DialogInterface$OnCancelListener;)Z
    .locals 6

    .line 3
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    move-object v1, p1

    move v2, p0

    move-object v3, p2

    move v4, p3

    move-object v5, p4

    .line 4
    invoke-virtual/range {v0 .. v5}, Lcom/huawei/hms/api/HuaweiApiAvailability;->showErrorDialogFragment(Landroid/app/Activity;ILandroid/app/Fragment;ILandroid/content/DialogInterface$OnCancelListener;)Z

    move-result p0

    return p0
.end method

.method public static setApplication(Landroid/app/Application;)V
    .locals 1

    .line 1
    sget-object v0, Lcom/huawei/hms/support/common/ActivityMgr;->INST:Lcom/huawei/hms/support/common/ActivityMgr;

    invoke-virtual {v0, p0}, Lcom/huawei/hms/support/common/ActivityMgr;->init(Landroid/app/Application;)V

    return-void
.end method

.method public static showErrorDialogFragment(ILandroid/app/Activity;I)Z
    .locals 2

    .line 1
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, p0, p2, v1}, Lcom/huawei/hms/api/HuaweiApiAvailability;->showErrorDialogFragment(Landroid/app/Activity;IILandroid/content/DialogInterface$OnCancelListener;)Z

    move-result p0

    return p0
.end method

.method public static showErrorNotification(ILandroid/content/Context;)V
    .locals 1

    .line 1
    invoke-static {}, Lcom/huawei/hms/api/HuaweiApiAvailability;->getInstance()Lcom/huawei/hms/api/HuaweiApiAvailability;

    move-result-object v0

    invoke-virtual {v0, p1, p0}, Lcom/huawei/hms/api/HuaweiApiAvailability;->showErrorNotification(Landroid/content/Context;I)V

    return-void
.end method
