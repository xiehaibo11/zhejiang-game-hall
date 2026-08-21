.class public Lcom/tkay/china/api/TYChinaSDKHandler;
.super Ljava/lang/Object;


# static fields
.field private static allowUserOaidSDK:Z = true


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static handleInitOaidSDK(Landroid/content/Context;Lcom/tkay/china/api/OaidSDKCallbackListener;)V
    .locals 2

    .line 31
    :try_start_0
    sget-boolean v0, Lcom/tkay/china/api/TYChinaSDKHandler;->allowUserOaidSDK:Z

    if-nez v0, :cond_1

    if-eqz p1, :cond_0

    const/4 p0, 0x0

    const/4 v0, 0x0

    .line 33
    invoke-interface {p1, p0, v0}, Lcom/tkay/china/api/OaidSDKCallbackListener;->OnSupport(ZLcom/bun/miitmdid/interfaces/IdSupplier;)V

    :cond_0
    return-void

    .line 37
    :cond_1
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 v0, 0x1

    new-instance v1, Lcom/tkay/china/api/TYChinaSDKHandler$1;

    invoke-direct {v1, p1}, Lcom/tkay/china/api/TYChinaSDKHandler$1;-><init>(Lcom/tkay/china/api/OaidSDKCallbackListener;)V

    invoke-static {p0, v0, v1}, Lcom/bun/miitmdid/core/MdidSdkHelper;->InitSdk(Landroid/content/Context;ZLcom/bun/miitmdid/interfaces/IIdentifierListener;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 53
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public static requestPermissionIfNecessary(Landroid/content/Context;)V
    .locals 5

    const-string v0, "android.permission.READ_PHONE_STATE"

    const-string v1, "android.permission.WRITE_EXTERNAL_STORAGE"

    .line 26
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    if-eqz p0, :cond_0

    .line 1035
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    if-lt v1, v2, :cond_0

    .line 1036
    new-instance v1, Ljava/util/Random;

    invoke-direct {v1}, Ljava/util/Random;-><init>()V

    const v2, 0x3b9aca00

    invoke-virtual {v1, v2}, Ljava/util/Random;->nextInt(I)I

    move-result v1

    .line 1040
    new-instance v2, Landroid/content/Intent;

    const-class v3, Lcom/tkay/china/activity/TransparentActivity;

    invoke-direct {v2, p0, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/16 v3, 0x3e8

    const-string v4, "type"

    .line 1041
    invoke-virtual {v2, v4, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string v3, "request_code"

    .line 1042
    invoke-virtual {v2, v3, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    const-string v1, "permission_list"

    .line 1043
    invoke-virtual {v2, v1, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/Intent;

    const/high16 v0, 0x10000000

    .line 1044
    invoke-virtual {v2, v0}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 1045
    invoke-virtual {p0, v2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void

    :cond_0
    const-string p0, "PermissionManager"

    const-string v0, "Build.VERSION.SDK_INT below 23 does not require permission"

    .line 1047
    invoke-static {p0, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public static setAllowUseMdidSDK(Z)V
    .locals 0

    .line 60
    sput-boolean p0, Lcom/tkay/china/api/TYChinaSDKHandler;->allowUserOaidSDK:Z

    return-void
.end method
