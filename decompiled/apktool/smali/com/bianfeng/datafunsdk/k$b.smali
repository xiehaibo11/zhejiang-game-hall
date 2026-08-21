.class public Lcom/bianfeng/datafunsdk/k$b;
.super Ljava/lang/Object;
.source "DBQueueManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/k;-><init>()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/k;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/k;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/k$b;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 1
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/k$b;->a:Lcom/bianfeng/datafunsdk/k;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/k;->b(Lcom/bianfeng/datafunsdk/k;)V
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x0

    throw v0

    .line 3
    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method
