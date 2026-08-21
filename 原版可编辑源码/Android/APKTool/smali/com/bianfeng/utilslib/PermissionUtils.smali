.class public Lcom/bianfeng/utilslib/PermissionUtils;
.super Ljava/lang/Object;
.source "PermissionUtils.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/utilslib/PermissionUtils$PermissionCallback;
    }
.end annotation


# static fields
.field private static final dataFunCode:I = 0x186b8


# instance fields
.field private callback:Lcom/bianfeng/utilslib/PermissionUtils$PermissionCallback;

.field private context:Landroid/app/Activity;

.field private lists:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private set:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method protected constructor <init>(Landroid/app/Activity;)V
    .locals 1

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 14
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->set:Ljava/util/Set;

    .line 25
    iput-object p1, p0, Lcom/bianfeng/utilslib/PermissionUtils;->context:Landroid/app/Activity;

    return-void
.end method

.method private requestPermission()V
    .locals 3

    .line 63
    iget-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 64
    iget-object v1, p0, Lcom/bianfeng/utilslib/PermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 65
    iget-object v1, p0, Lcom/bianfeng/utilslib/PermissionUtils;->context:Landroid/app/Activity;

    const v2, 0x186b8

    invoke-virtual {v1, v0, v2}, Landroid/app/Activity;->requestPermissions([Ljava/lang/String;I)V

    return-void
.end method

.method private rquestPermissions()Z
    .locals 3

    .line 45
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->lists:Ljava/util/List;

    .line 46
    iget-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->set:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 48
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 49
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 50
    iget-object v2, p0, Lcom/bianfeng/utilslib/PermissionUtils;->context:Landroid/app/Activity;

    invoke-virtual {v2, v1}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v2

    if-eqz v2, :cond_0

    .line 51
    iget-object v2, p0, Lcom/bianfeng/utilslib/PermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 54
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->lists:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 55
    invoke-direct {p0}, Lcom/bianfeng/utilslib/PermissionUtils;->requestPermission()V

    const/4 v0, 0x0

    return v0

    :cond_2
    const/4 v0, 0x1

    return v0
.end method


# virtual methods
.method public addPermissionStr(Ljava/lang/String;)Lcom/bianfeng/utilslib/PermissionUtils;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->set:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-object p0
.end method

.method public check()Z
    .locals 2

    .line 41
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_0

    invoke-direct {p0}, Lcom/bianfeng/utilslib/PermissionUtils;->rquestPermissions()Z

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    :goto_0
    return v0
.end method

.method public checkReadStorage()Z
    .locals 2

    .line 73
    iget-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->context:Landroid/app/Activity;

    const-string v1, "android.permission.READ_EXTERNAL_STORAGE"

    invoke-virtual {v0, v1}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public checkWriteStorage()Z
    .locals 2

    .line 69
    iget-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->context:Landroid/app/Activity;

    const-string v1, "android.permission.WRITE_EXTERNAL_STORAGE"

    invoke-virtual {v0, v1}, Landroid/app/Activity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 1

    const v0, 0x186b8

    if-ne p1, v0, :cond_0

    .line 77
    iget-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->callback:Lcom/bianfeng/utilslib/PermissionUtils$PermissionCallback;

    if-eqz v0, :cond_0

    .line 78
    invoke-interface {v0, p1, p2, p3}, Lcom/bianfeng/utilslib/PermissionUtils$PermissionCallback;->onPermission(I[Ljava/lang/String;[I)V

    :cond_0
    return-void
.end method

.method public setCallback(Lcom/bianfeng/utilslib/PermissionUtils$PermissionCallback;)Lcom/bianfeng/utilslib/PermissionUtils;
    .locals 0

    .line 20
    iput-object p1, p0, Lcom/bianfeng/utilslib/PermissionUtils;->callback:Lcom/bianfeng/utilslib/PermissionUtils$PermissionCallback;

    return-object p0
.end method

.method public setDefaultPermission()Lcom/bianfeng/utilslib/PermissionUtils;
    .locals 2

    .line 34
    iget-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->set:Ljava/util/Set;

    const-string v1, "android.permission.READ_PHONE_STATE"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 35
    iget-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->set:Ljava/util/Set;

    const-string v1, "android.permission.WRITE_EXTERNAL_STORAGE"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 36
    iget-object v0, p0, Lcom/bianfeng/utilslib/PermissionUtils;->set:Ljava/util/Set;

    const-string v1, "android.permission.READ_EXTERNAL_STORAGE"

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-object p0
.end method
