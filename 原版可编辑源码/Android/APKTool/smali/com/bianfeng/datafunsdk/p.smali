.class public Lcom/bianfeng/datafunsdk/p;
.super Ljava/lang/Object;
.source "HttpMethod.java"


# instance fields
.field public a:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/p;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public a()Z
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/p;->a:Ljava/lang/String;

    const-string v1, "post"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method
