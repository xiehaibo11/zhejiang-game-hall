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

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/f;->a:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public a()Lcom/bianfeng/ymnsdk/feature/f;
    .locals 2

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/f;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->wRich(Ljava/lang/String;)I

    .line 3
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/f;->b:Lcom/bianfeng/ymnsdk/feature/f$a;

    if-eqz v0, :cond_0

    .line 4
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/feature/f;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/bianfeng/ymnsdk/feature/f$a;->a(Ljava/lang/String;)V

    :cond_0
    return-object p0
.end method

.method public a(Lcom/bianfeng/ymnsdk/feature/f$a;)Lcom/bianfeng/ymnsdk/feature/f;
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/f;->b:Lcom/bianfeng/ymnsdk/feature/f$a;

    return-object p0
.end method
