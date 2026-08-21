.class public Lcom/ymnsdk/replugin/entity/silentfilter/UserCustFilterEntity;
.super Ljava/lang/Object;
.source "UserCustFilterEntity.java"


# instance fields
.field key:Ljava/lang/String;

.field value:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getKey()Ljava/lang/String;
    .locals 1

    .line 12
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/silentfilter/UserCustFilterEntity;->key:Ljava/lang/String;

    return-object v0
.end method

.method public getValue()Ljava/lang/String;
    .locals 1

    .line 20
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/silentfilter/UserCustFilterEntity;->value:Ljava/lang/String;

    return-object v0
.end method

.method public setKey(Ljava/lang/String;)V
    .locals 0

    .line 16
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/silentfilter/UserCustFilterEntity;->key:Ljava/lang/String;

    return-void
.end method

.method public setValue(Ljava/lang/String;)V
    .locals 0

    .line 24
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/silentfilter/UserCustFilterEntity;->value:Ljava/lang/String;

    return-void
.end method
