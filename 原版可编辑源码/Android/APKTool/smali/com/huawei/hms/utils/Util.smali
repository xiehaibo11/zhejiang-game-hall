.class public Lcom/huawei/hms/utils/Util;
.super Ljava/lang/Object;
.source "Util.java"


# static fields
.field private static final AVAILABLE_LOADED:Ljava/lang/String; = "availableLoaded"

.field private static final LOCK_OBJECT:Ljava/lang/Object;

.field private static final META_HMSVERSION_NAME:Ljava/lang/String; = "com.huawei.hms.version"

.field private static final SERVICE_ACTION:Ljava/lang/String; = "com.huawei.hms.core.aidl.action"

.field private static final TAG:Ljava/lang/String; = "Util"

.field private static availableInit:Z

.field private static isAvailableAvailable:Z

.field private static serviceAction:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 1
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/huawei/hms/utils/Util;->LOCK_OBJECT:Ljava/lang/Object;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static compareHmsVersion(Ljava/lang/String;Ljava/lang/String;)I
    .locals 6

    .line 1
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, -0x1

    if-eqz v0, :cond_0

    return v1

    .line 5
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    return v2

    .line 9
    :cond_1
    invoke-static {p0}, Lcom/huawei/hms/utils/StringUtil;->checkVersion(Ljava/lang/String;)Z

    move-result v0

    const/4 v3, 0x0

    if-eqz v0, :cond_7

    invoke-static {p1}, Lcom/huawei/hms/utils/StringUtil;->checkVersion(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_7

    const-string v0, "\\."

    .line 10
    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    .line 11
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 12
    array-length v0, p0

    const/4 v4, 0x2

    if-ge v4, v0, :cond_7

    array-length v0, p1

    if-ge v4, v0, :cond_7

    .line 13
    aget-object v0, p0, v3

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    aget-object v5, p1, v3

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    if-le v0, v5, :cond_2

    return v2

    .line 15
    :cond_2
    aget-object v0, p0, v3

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    aget-object v5, p1, v3

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    if-ge v0, v5, :cond_3

    return v1

    .line 19
    :cond_3
    aget-object v0, p0, v2

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    aget-object v5, p1, v2

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    if-le v0, v5, :cond_4

    return v2

    .line 21
    :cond_4
    aget-object v0, p0, v2

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    aget-object v5, p1, v2

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    if-ge v0, v5, :cond_5

    return v1

    .line 25
    :cond_5
    aget-object v0, p0, v4

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    aget-object v5, p1, v4

    invoke-static {v5}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5

    if-le v0, v5, :cond_6

    return v2

    .line 27
    :cond_6
    aget-object p0, p0, v4

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    aget-object p1, p1, v4

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    if-ge p0, p1, :cond_7

    return v1

    :cond_7
    return v3
.end method

.method public static getActiveActivity(Landroid/app/Activity;Landroid/content/Context;)Landroid/app/Activity;
    .locals 0

    .line 1
    invoke-static {p0, p1}, Lcom/huawei/hms/utils/UIUtil;->getActiveActivity(Landroid/app/Activity;Landroid/content/Context;)Landroid/app/Activity;

    move-result-object p0

    return-object p0
.end method

.method public static getAppId(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/huawei/hms/common/util/AGCUtils;->getAppId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getAppName(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, "Util"

    const-string v1, ""

    if-nez p0, :cond_0

    const-string p0, "In getAppName, context is null."

    .line 1
    invoke-static {v0, p0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    .line 5
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    if-nez v2, :cond_1

    const-string p0, "In getAppName, Failed to get \'PackageManager\' instance."

    .line 7
    invoke-static {v0, p0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    .line 12
    :cond_1
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    :cond_2
    const/4 p0, 0x0

    .line 13
    invoke-virtual {v2, p1, p0}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object p0

    .line 14
    invoke-virtual {v2, p0}, Landroid/content/pm/PackageManager;->getApplicationLabel(Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;

    move-result-object p0

    if-nez p0, :cond_3

    goto :goto_0

    .line 15
    :cond_3
    invoke-interface {p0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0
    .catch Landroid/content/res/Resources$NotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    :goto_0
    return-object v1

    :catch_0
    const-string p0, "In getAppName, Failed to get app name."

    .line 17
    invoke-static {v0, p0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1
.end method

.method public static getCpId(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/huawei/hms/common/util/AGCUtils;->getCpId(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getHmsVersion(Landroid/content/Context;)I
    .locals 5

    const-string v0, "In getHmsVersion, Failed to read meta data for the HMS VERSION."

    .line 1
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const/4 v2, 0x0

    const-string v3, "Util"

    if-nez v1, :cond_0

    const-string p0, "In getHmsVersion, Failed to get \'PackageManager\' instance."

    .line 3
    invoke-static {v3, p0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 8
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v4, 0x80

    invoke-virtual {v1, p0, v4}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    if-eqz p0, :cond_1

    .line 9
    iget-object v1, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz v1, :cond_1

    .line 10
    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v1, "com.huawei.hms.version"

    invoke-virtual {p0, v1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 12
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    .line 13
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 14
    invoke-static {p0}, Lcom/huawei/hms/utils/StringUtil;->convertVersion2Integer(Ljava/lang/String;)I

    move-result p0

    return p0

    .line 18
    :cond_1
    invoke-static {v3, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    return v2

    .line 22
    :catch_0
    invoke-static {v3, v0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    return v2
.end method

.method public static getNetType(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-static {p0}, Lcom/huawei/hms/android/SystemUtils;->getNetType(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getProcessName(Landroid/content/Context;I)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-static {p0, p1}, Lcom/huawei/hms/utils/UIUtil;->getProcessName(Landroid/content/Context;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getProductCountry()Ljava/lang/String;
    .locals 4
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-string v0, ""

    const-string v1, "ro.product.locale.region"

    .line 1
    invoke-static {v1, v0}, Lcom/huawei/hms/utils/Util;->getSystemProperties(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    return-object v1

    :cond_0
    const-string v1, "ro.product.locale"

    .line 5
    invoke-static {v1, v0}, Lcom/huawei/hms/utils/Util;->getSystemProperties(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 6
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    const-string v2, "-"

    .line 7
    invoke-virtual {v1, v2}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_1

    add-int/lit8 v2, v2, 0x1

    .line 9
    invoke-virtual {v1, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 14
    :cond_1
    invoke-static {}, Lcom/huawei/hms/android/SystemUtils;->getLocalCountry()Ljava/lang/String;

    move-result-object v1

    .line 15
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    move-object v0, v1

    :cond_2
    return-object v0
.end method

.method public static getServiceActionMetadata(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    const-string v0, "In getServiceActionMetadata, Failed to read meta data for the SERVICE ACTION."

    .line 1
    sget-object v1, Lcom/huawei/hms/utils/Util;->serviceAction:Ljava/lang/String;

    if-eqz v1, :cond_0

    return-object v1

    .line 4
    :cond_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    const-string v2, "Util"

    if-nez v1, :cond_1

    const-string p0, "In getHmsVersion, Failed to get \'PackageManager\' instance."

    .line 6
    invoke-static {v2, p0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    return-object p0

    .line 10
    :cond_1
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v3, 0x80

    invoke-virtual {v1, p0, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    if-eqz p0, :cond_2

    .line 11
    iget-object v1, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz v1, :cond_2

    .line 12
    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v1, "com.huawei.hms.core.aidl.action"

    invoke-virtual {p0, v1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_2

    .line 14
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    .line 15
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 16
    sput-object p0, Lcom/huawei/hms/utils/Util;->serviceAction:Ljava/lang/String;

    return-object p0

    .line 21
    :cond_2
    invoke-static {v2, v0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 23
    :catch_0
    invoke-static {v2, v0}, Lcom/huawei/hms/support/log/HMSLog;->w(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    const-string p0, ""

    .line 25
    sput-object p0, Lcom/huawei/hms/utils/Util;->serviceAction:Ljava/lang/String;

    return-object p0
.end method

.method public static getSystemProperties(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-static {p0, p1}, Lcom/huawei/hms/android/SystemUtils;->getSystemProperties(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getValidActivity(Landroid/app/Activity;Landroid/app/Activity;)Landroid/app/Activity;
    .locals 1

    if-eqz p0, :cond_0

    .line 1
    invoke-virtual {p0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_3

    :cond_0
    if-eqz p1, :cond_2

    .line 3
    invoke-virtual {p1}, Landroid/app/Activity;->isFinishing()Z

    move-result p0

    if-eqz p0, :cond_1

    goto :goto_0

    :cond_1
    move-object p0, p1

    goto :goto_1

    :cond_2
    :goto_0
    const/4 p0, 0x0

    :cond_3
    :goto_1
    return-object p0
.end method

.method public static isAvailableLibExist(Landroid/content/Context;)Z
    .locals 5

    .line 1
    sget-object v0, Lcom/huawei/hms/utils/Util;->LOCK_OBJECT:Ljava/lang/Object;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-boolean v1, Lcom/huawei/hms/utils/Util;->availableInit:Z

    if-nez v1, :cond_2

    const/4 v1, 0x0

    .line 5
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    const/4 v3, 0x1

    if-nez v2, :cond_0

    const-string p0, "Util"

    const-string v2, "In isAvailableLibExist, Failed to get \'PackageManager\' instance."

    .line 7
    invoke-static {p0, v2}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string p0, "com.huawei.hms.adapter.AvailableAdapter"

    .line 9
    :try_start_1
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    :try_start_2
    const-string p0, "Util"

    const-string v2, "In isAvailableLibExist, Failed to find class AvailableAdapter."

    .line 12
    invoke-static {p0, v2}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    .line 16
    :cond_0
    :try_start_3
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p0

    const/16 v4, 0x80

    invoke-virtual {v2, p0, v4}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    if-eqz p0, :cond_1

    .line 17
    iget-object v2, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz v2, :cond_1

    .line 18
    iget-object p0, p0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    const-string v2, "availableLoaded"

    invoke-virtual {p0, v2}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 20
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-string v2, "yes"

    .line 21
    invoke-virtual {p0, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    const-string p0, "Util"

    const-string v2, "available exist: true"

    .line 22
    invoke-static {p0, v2}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :goto_0
    move v1, v3

    goto :goto_1

    :catch_1
    :try_start_4
    const-string p0, "Util"

    const-string v2, "In isAvailableLibExist, Failed to read meta data for the availableLoaded."

    .line 29
    invoke-static {p0, v2}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 32
    :cond_1
    :goto_1
    sput-boolean v1, Lcom/huawei/hms/utils/Util;->isAvailableAvailable:Z

    .line 33
    sput-boolean v3, Lcom/huawei/hms/utils/Util;->availableInit:Z

    .line 35
    :cond_2
    monitor-exit v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 37
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "available exist: "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v0, Lcom/huawei/hms/utils/Util;->isAvailableAvailable:Z

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "Util"

    invoke-static {v0, p0}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 38
    sget-boolean p0, Lcom/huawei/hms/utils/Util;->isAvailableAvailable:Z

    return p0

    :catchall_0
    move-exception p0

    .line 39
    :try_start_5
    monitor-exit v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    throw p0
.end method

.method public static isChinaROM()Z
    .locals 1

    .line 1
    invoke-static {}, Lcom/huawei/hms/android/SystemUtils;->isChinaROM()Z

    move-result v0

    return v0
.end method

.method public static isEMUI()Z
    .locals 1

    .line 1
    invoke-static {}, Lcom/huawei/hms/android/SystemUtils;->isEMUI()Z

    move-result v0

    return v0
.end method

.method public static unBindServiceCatchException(Landroid/content/Context;Landroid/content/ServiceConnection;)V
    .locals 3

    const-string v0, "Util"

    .line 1
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Trying to unbind service from "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/huawei/hms/support/log/HMSLog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 2
    invoke-virtual {p0, p1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 8
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "On unBindServiceException:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/huawei/hms/support/log/HMSLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
