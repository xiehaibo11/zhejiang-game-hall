.class public Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;
.super Ljava/lang/Object;
.source "UrlConfig.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/entity/UrlConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "ServerList"
.end annotation


# instance fields
.field private backup:Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;

.field private normal:Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;

.field final synthetic this$0:Lcom/bianfeng/ymnsdk/entity/UrlConfig;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;->this$0:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getBackup()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;->backup:Lcom/bianfeng/ymnsdk/entity/UrlConfig$Backup;

    return-object v0
.end method

.method public getNormal()Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig$ServerList;->normal:Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;

    return-object v0
.end method
