.class public Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;
.super Ljava/lang/Object;
.source "UrlConfig.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/entity/UrlConfig;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "Normal"
.end annotation


# instance fields
.field private max_fails:I

.field private server:Ljava/lang/String;

.field final synthetic this$0:Lcom/bianfeng/ymnsdk/entity/UrlConfig;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/entity/UrlConfig;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;->this$0:Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getMax_fails()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;->max_fails:I

    return v0
.end method

.method public getServer()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/UrlConfig$Normal;->server:Ljava/lang/String;

    return-object v0
.end method
