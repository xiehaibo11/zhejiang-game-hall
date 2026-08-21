.class public Lcom/bianfeng/datafunsdk/t$b;
.super Ljava/lang/Object;
.source "RequestQueueManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/t;-><init>()V
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
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/t$b;->a:Lcom/bianfeng/datafunsdk/t;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/t$b;->a:Lcom/bianfeng/datafunsdk/t;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/t;->b(Lcom/bianfeng/datafunsdk/t;)V

    const/4 v0, 0x0

    throw v0
.end method
