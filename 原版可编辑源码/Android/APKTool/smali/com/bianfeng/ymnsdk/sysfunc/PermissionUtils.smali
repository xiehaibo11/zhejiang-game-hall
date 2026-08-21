.class public Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;
.super Ljava/lang/Object;
.source "PermissionUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils$OnRequestPermissionsResultCallbacks;
    }
.end annotation


# static fields
.field static final synthetic $assertionsDisabled:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static varargs deniedRequestAgain(Landroid/app/Activity;[Ljava/lang/String;)Z
    .locals 4

    .line 108
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->needCheckPermission()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 111
    :cond_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->getDeniedPermissions(Landroid/app/Activity;[Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    .line 113
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 115
    invoke-virtual {p0, v0}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_1

    .line 117
    invoke-virtual {p0, v0}, Landroid/app/Activity;->shouldShowRequestPermissionRationale(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_2
    return v1
.end method

.method private static varargs getDeniedPermissions(Landroid/app/Activity;[Ljava/lang/String;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "[",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 73
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->needCheckPermission()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 76
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 77
    array-length v2, p1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_2

    aget-object v4, p1, v3

    .line 78
    invoke-virtual {p0, v4}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v5

    if-eqz v5, :cond_1

    .line 79
    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 82
    :cond_2
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result p0

    if-nez p0, :cond_3

    return-object v0

    :cond_3
    return-object v1
.end method

.method public static getDownLoadPermissions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z
    .locals 2

    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    const-string v1, "android.permission.READ_EXTERNAL_STORAGE"

    .line 57
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->requestPerssions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;[Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static getEmulatorPermissions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z
    .locals 2

    const-string v0, "android.permission.READ_PHONE_STATE"

    const-string v1, "android.permission.READ_SMS"

    .line 44
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->requestPerssions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;[Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static getLocationPermissions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z
    .locals 2

    const-string v0, "android.permission.ACCESS_COARSE_LOCATION"

    const-string v1, "android.permission.ACCESS_FINE_LOCATION"

    .line 53
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->requestPerssions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;[Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static getScreenShotPermissions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Z
    .locals 2

    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    const-string v1, "android.permission.READ_EXTERNAL_STORAGE"

    .line 66
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->requestPerssions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;[Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private static varargs hasPermissons(Landroid/app/Activity;[Ljava/lang/String;)Z
    .locals 5

    .line 92
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->needCheckPermission()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    .line 95
    :cond_0
    array-length v0, p1

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v0, :cond_2

    aget-object v4, p1, v3

    .line 96
    invoke-virtual {p0, v4}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v4

    if-eqz v4, :cond_1

    return v2

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    return v1
.end method

.method private static needCheckPermission()Z
    .locals 2

    .line 35
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static onRequestPermissionsResult(I[Ljava/lang/String;[ILcom/bianfeng/ymnsdk/sysfunc/PermissionUtils$OnRequestPermissionsResultCallbacks;)V
    .locals 5

    .line 171
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 172
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    .line 173
    :goto_0
    array-length v3, p1

    if-ge v2, v3, :cond_1

    .line 174
    aget-object v3, p1, v2

    .line 175
    aget v4, p2, v2

    if-nez v4, :cond_0

    .line 176
    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 178
    :cond_0
    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    if-eqz p3, :cond_3

    .line 182
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_2

    .line 183
    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result p1

    invoke-interface {p3, p0, v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils$OnRequestPermissionsResultCallbacks;->onPermissionsGranted(ILjava/util/List;Z)V

    .line 185
    :cond_2
    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_3

    .line 186
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result p1

    invoke-interface {p3, p0, v1, p1}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils$OnRequestPermissionsResultCallbacks;->onPermissionsDenied(ILjava/util/List;Z)V

    :cond_3
    return-void
.end method

.method public static varargs requestPerssions(Landroid/app/Activity;ILcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;[Ljava/lang/String;)Z
    .locals 2

    .line 150
    invoke-static {}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->needCheckPermission()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    .line 154
    :cond_0
    invoke-static {p0, p3}, Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;->getDeniedPermissions(Landroid/app/Activity;[Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 157
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p0

    invoke-virtual {p0, p3}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions([Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z

    const/4 p0, 0x0

    return p0

    :cond_1
    return v1
.end method

.method public static startApplicationDetailsSettings(Landroid/app/Activity;I)V
    .locals 4

    const-string v0, "\u70b9\u51fb\u6743\u9650\uff0c\u5e76\u6253\u5f00\u5168\u90e8\u6743\u9650"

    const/4 v1, 0x0

    .line 132
    invoke-static {p0, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 134
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.settings.APPLICATION_DETAILS_SETTINGS"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 135
    invoke-virtual {p0}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "package"

    const/4 v3, 0x0

    invoke-static {v2, v1, v3}, Landroid/net/Uri;->fromParts(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    .line 136
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 137
    invoke-virtual {p0, v0, p1}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V

    return-void
.end method
