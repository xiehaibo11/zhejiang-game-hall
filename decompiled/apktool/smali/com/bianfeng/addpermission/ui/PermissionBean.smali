.class public Lcom/bianfeng/addpermission/ui/PermissionBean;
.super Ljava/lang/Object;
.source "PermissionBean.java"


# instance fields
.field private androidName:Ljava/lang/String;

.field private describe:Ljava/lang/String;

.field private name:Ljava/lang/String;

.field private type:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->name:Ljava/lang/String;

    .line 13
    iput-object p2, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->describe:Ljava/lang/String;

    .line 14
    iput-object p3, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->type:Ljava/lang/String;

    .line 15
    iput-object p4, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->androidName:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getAndroidName()Ljava/lang/String;
    .locals 1

    .line 19
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->androidName:Ljava/lang/String;

    return-object v0
.end method

.method public getIsok()Ljava/lang/String;
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->type:Ljava/lang/String;

    return-object v0
.end method

.method public getName()Ljava/lang/String;
    .locals 1

    .line 27
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->name:Ljava/lang/String;

    return-object v0
.end method

.method public getNotity()Ljava/lang/String;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->describe:Ljava/lang/String;

    return-object v0
.end method

.method public setAndroidName(Ljava/lang/String;)V
    .locals 0

    .line 23
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->androidName:Ljava/lang/String;

    return-void
.end method

.method public setIsok(Ljava/lang/String;)V
    .locals 0

    .line 47
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->type:Ljava/lang/String;

    return-void
.end method

.method public setName(Ljava/lang/String;)V
    .locals 0

    .line 31
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->name:Ljava/lang/String;

    return-void
.end method

.method public setNotity(Ljava/lang/String;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/PermissionBean;->describe:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 52
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-virtual {v0, p0}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
