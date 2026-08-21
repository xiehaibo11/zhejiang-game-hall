.class public Lcom/bianfeng/addpermission/common/CheckPermissionUtils;
.super Ljava/lang/Object;
.source "CheckPermissionUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;
    }
.end annotation


# instance fields
.field private checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

.field private context:Landroid/app/Activity;

.field private isRequest:Z

.field private lackedPermission:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private nameMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private permissionBeanList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/addpermission/ui/PermissionBean;",
            ">;"
        }
    .end annotation
.end field

.field private permissionCallback:Lcom/bianfeng/addpermission/ui/PermissionCallback;

.field private permissionMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private permissions:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;)V
    .locals 1

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 23
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->lackedPermission:Ljava/util/List;

    .line 24
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissionBeanList:Ljava/util/List;

    const/4 v0, 0x0

    .line 27
    iput-boolean v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->isRequest:Z

    .line 150
    new-instance v0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$1;-><init>(Lcom/bianfeng/addpermission/common/CheckPermissionUtils;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissionCallback:Lcom/bianfeng/addpermission/ui/PermissionCallback;

    .line 34
    iput-object p1, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->context:Landroid/app/Activity;

    .line 35
    iput-object p2, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;Ljava/lang/String;Z)V
    .locals 1

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 23
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->lackedPermission:Ljava/util/List;

    .line 24
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissionBeanList:Ljava/util/List;

    const/4 v0, 0x0

    .line 27
    iput-boolean v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->isRequest:Z

    .line 150
    new-instance v0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$1;-><init>(Lcom/bianfeng/addpermission/common/CheckPermissionUtils;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissionCallback:Lcom/bianfeng/addpermission/ui/PermissionCallback;

    .line 39
    iput-object p1, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->context:Landroid/app/Activity;

    .line 40
    iput-object p2, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    .line 41
    iput-object p3, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissions:Ljava/lang/String;

    .line 42
    iput-boolean p4, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->isRequest:Z

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/addpermission/common/CheckPermissionUtils;)Ljava/lang/String;
    .locals 0

    .line 19
    invoke-direct {p0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->requestPermission()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/addpermission/common/CheckPermissionUtils;)Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;
    .locals 0

    .line 19
    iget-object p0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    return-object p0
.end method

.method private appendPermissions(Ljava/util/List;)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 137
    new-instance v0, Lcom/bianfeng/addpermission/common/Constants;

    invoke-direct {v0}, Lcom/bianfeng/addpermission/common/Constants;-><init>()V

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/Constants;->getPermissionStr()Ljava/util/ArrayList;

    move-result-object v0

    .line 138
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 139
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 141
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    const-string v3, ";"

    .line 142
    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-interface {v0, v2}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    .line 144
    invoke-virtual {v1, p1}, Ljava/lang/StringBuffer;->substring(I)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method private checkAndRequestPermission()V
    .locals 9

    .line 64
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissions:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 65
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->context:Landroid/app/Activity;

    const-string v1, "ANDROID_REQUEST_PERMISSION"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissions:Ljava/lang/String;

    .line 67
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissions:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 68
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;->onHasPermission()V

    return-void

    .line 71
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissions:Ljava/lang/String;

    const-string v1, ";"

    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 72
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "checkAndRequestPermission===="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissions:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 73
    new-instance v1, Lcom/bianfeng/addpermission/common/Constants;

    invoke-direct {v1}, Lcom/bianfeng/addpermission/common/Constants;-><init>()V

    .line 74
    invoke-virtual {v1}, Lcom/bianfeng/addpermission/common/Constants;->getPermissionAndroiMap()Ljava/util/Map;

    move-result-object v3

    iput-object v3, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissionMap:Ljava/util/Map;

    .line 75
    invoke-virtual {v1}, Lcom/bianfeng/addpermission/common/Constants;->getPermissionNameMap()Ljava/util/Map;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->nameMap:Ljava/util/Map;

    const/4 v1, 0x0

    .line 78
    :goto_0
    array-length v3, v0

    if-ge v1, v3, :cond_4

    .line 79
    aget-object v3, v0, v1

    .line 80
    iget-object v4, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissionMap:Ljava/util/Map;

    invoke-interface {v4, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 82
    iget-object v5, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->context:Landroid/app/Activity;

    invoke-static {v5, v3}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 83
    iget-object v6, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->nameMap:Ljava/util/Map;

    invoke-interface {v6, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    .line 84
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_2

    .line 85
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "permission is null , key is "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    goto :goto_1

    .line 88
    :cond_2
    iget-object v3, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->context:Landroid/app/Activity;

    invoke-virtual {v3, v4}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v3

    if-eqz v3, :cond_3

    .line 89
    iget-object v3, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->lackedPermission:Ljava/util/List;

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 90
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 91
    iget-object v3, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissionBeanList:Ljava/util/List;

    new-instance v7, Lcom/bianfeng/addpermission/ui/PermissionBean;

    const-string v8, "0"

    invoke-direct {v7, v6, v5, v8, v4}, Lcom/bianfeng/addpermission/ui/PermissionBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v3, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_3
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 95
    :cond_4
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->context:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissionBeanList:Ljava/util/List;

    invoke-virtual {v0, v1}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->putString(Ljava/util/List;)V

    .line 98
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->lackedPermission:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "\u8d70\u7684\u662f\u4e0d\u7533\u8bf7\u6743\u9650"

    .line 99
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 100
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;->onHasPermission()V

    goto :goto_2

    .line 103
    :cond_5
    iget-boolean v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->isRequest:Z

    if-eqz v0, :cond_6

    .line 104
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    invoke-direct {p0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->requestPermission()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;->onAgree(Ljava/lang/String;)V

    goto :goto_2

    .line 106
    :cond_6
    invoke-direct {p0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->showPermissionDialog()V

    :goto_2
    return-void
.end method

.method private requestPermission()Ljava/lang/String;
    .locals 5

    .line 119
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->context:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getPermissions()Ljava/util/List;

    move-result-object v0

    .line 120
    iget-object v1, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->lackedPermission:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 121
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/bianfeng/addpermission/ui/PermissionBean;

    .line 122
    invoke-virtual {v1}, Lcom/bianfeng/addpermission/ui/PermissionBean;->getIsok()Ljava/lang/String;

    move-result-object v2

    .line 123
    invoke-virtual {v1}, Lcom/bianfeng/addpermission/ui/PermissionBean;->getAndroidName()Ljava/lang/String;

    move-result-object v1

    .line 124
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "requestPermission isok="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "androidName="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    const-string v3, "0"

    .line 125
    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 126
    iget-object v2, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->lackedPermission:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 129
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->lackedPermission:Ljava/util/List;

    invoke-direct {p0, v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->appendPermissions(Ljava/util/List;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private showPermissionDialog()V
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->permissionCallback:Lcom/bianfeng/addpermission/ui/PermissionCallback;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->setPermissionCallback(Lcom/bianfeng/addpermission/ui/PermissionCallback;)V

    .line 114
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->context:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->toShowPermissionDialog(Landroid/app/Activity;)V

    return-void
.end method


# virtual methods
.method public check()V
    .locals 3

    .line 46
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->context:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getRefuxe()Z

    move-result v0

    .line 47
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "check========"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    if-eqz v0, :cond_0

    .line 49
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;->onHasPermission()V

    return-void

    .line 52
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_1

    const-string v0, "check===="

    .line 53
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 54
    invoke-direct {p0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->checkAndRequestPermission()V

    goto :goto_0

    :cond_1
    const-string v0, "\u4e0d\u9700\u8981=\u6743\u9650====="

    .line 57
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 58
    iget-object v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->checkCallback:Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;

    invoke-interface {v0}, Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;->onHasPermission()V

    :goto_0
    return-void
.end method

.method public isRequest()Z
    .locals 1

    .line 30
    iget-boolean v0, p0, Lcom/bianfeng/addpermission/common/CheckPermissionUtils;->isRequest:Z

    return v0
.end method
