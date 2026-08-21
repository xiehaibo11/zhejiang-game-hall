.class public Lcom/bianfeng/netlibsdk/Response;
.super Ljava/lang/Object;
.source "Response.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field public final error:Lcom/bianfeng/netlibsdk/utils/NetException;

.field public intermediate:Z

.field public final result:Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TT;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Lcom/bianfeng/netlibsdk/utils/NetException;)V
    .locals 1

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 19
    iput-boolean v0, p0, Lcom/bianfeng/netlibsdk/Response;->intermediate:Z

    const/4 v0, 0x0

    .line 31
    iput-object v0, p0, Lcom/bianfeng/netlibsdk/Response;->result:Ljava/lang/Object;

    .line 32
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/Response;->error:Lcom/bianfeng/netlibsdk/utils/NetException;

    return-void
.end method

.method private constructor <init>(Ljava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)V"
        }
    .end annotation

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 19
    iput-boolean v0, p0, Lcom/bianfeng/netlibsdk/Response;->intermediate:Z

    .line 26
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/Response;->result:Ljava/lang/Object;

    const/4 p1, 0x0

    .line 27
    iput-object p1, p0, Lcom/bianfeng/netlibsdk/Response;->error:Lcom/bianfeng/netlibsdk/utils/NetException;

    return-void
.end method

.method public static error(Lcom/bianfeng/netlibsdk/utils/NetException;)Lcom/bianfeng/netlibsdk/Response;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/bianfeng/netlibsdk/utils/NetException;",
            ")",
            "Lcom/bianfeng/netlibsdk/Response<",
            "TT;>;"
        }
    .end annotation

    .line 12
    new-instance v0, Lcom/bianfeng/netlibsdk/Response;

    invoke-direct {v0, p0}, Lcom/bianfeng/netlibsdk/Response;-><init>(Lcom/bianfeng/netlibsdk/utils/NetException;)V

    return-object v0
.end method

.method public static success(Ljava/lang/Object;)Lcom/bianfeng/netlibsdk/Response;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(TT;)",
            "Lcom/bianfeng/netlibsdk/Response<",
            "TT;>;"
        }
    .end annotation

    .line 8
    new-instance v0, Lcom/bianfeng/netlibsdk/Response;

    invoke-direct {v0, p0}, Lcom/bianfeng/netlibsdk/Response;-><init>(Ljava/lang/Object;)V

    return-object v0
.end method


# virtual methods
.method public isSuccess()Z
    .locals 1

    .line 22
    iget-object v0, p0, Lcom/bianfeng/netlibsdk/Response;->error:Lcom/bianfeng/netlibsdk/utils/NetException;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method
