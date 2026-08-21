.class public Lcom/bianfeng/datafunsdk/t$c;
.super Ljava/lang/Object;
.source "RequestQueueManager.java"

# interfaces
.implements Lcom/bianfeng/datafunsdk/r;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/datafunsdk/t;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/t;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/t;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/t$c;->a:Lcom/bianfeng/datafunsdk/t;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/t$c;->a:Lcom/bianfeng/datafunsdk/t;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/t;->c(Lcom/bianfeng/datafunsdk/t;)Lcom/bianfeng/datafunsdk/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/datafunsdk/a;->d(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method

.method public a(Lcom/bianfeng/datafunsdk/o;)V
    .locals 1

    .line 2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/t$c;->a:Lcom/bianfeng/datafunsdk/t;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/t;->c(Lcom/bianfeng/datafunsdk/t;)Lcom/bianfeng/datafunsdk/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/datafunsdk/a;->a(Lcom/bianfeng/datafunsdk/o;)V

    return-void
.end method

.method public b(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/t$c;->a:Lcom/bianfeng/datafunsdk/t;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/t;->c(Lcom/bianfeng/datafunsdk/t;)Lcom/bianfeng/datafunsdk/a;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/datafunsdk/a;->e(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method
