.class public Lcom/bianfeng/ymnsdk/feature/f;
.super Ljava/lang/Object;
.source "YmnWarning.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/feature/f$a;
    }
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Lcom/bianfeng/ymnsdk/feature/f$a;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 0
    .param p1, "message"    # Ljava/lang/String;

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/f;->a:Ljava/lang/String;

    .line 19
    return-void
.end method


# virtual methods
.method public a()Lcom/bianfeng/ymnsdk/feature/f;
    .locals 2

    .line 27
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/f;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->wRich(Ljava/lang/String;)I

    .line 28
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/f;->b:Lcom/bianfeng/ymnsdk/feature/f$a;

    if-eqz v0, :cond_0

    .line 29
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/f;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/feature/f$a;->a(Ljava/lang/String;)V

    .line 31
    :cond_0
    return-object p0
.end method

.method public a(Lcom/bianfeng/ymnsdk/feature/f$a;)Lcom/bianfeng/ymnsdk/feature/f;
    .locals 0
    .param p1, "runnable"    # Lcom/bianfeng/ymnsdk/feature/f$a;

    .line 22
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/f;->b:Lcom/bianfeng/ymnsdk/feature/f$a;

    .line 23
    return-object p0
.end method
