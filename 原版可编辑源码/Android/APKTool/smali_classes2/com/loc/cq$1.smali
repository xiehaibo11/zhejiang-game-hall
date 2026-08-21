.class final Lcom/loc/cq$1;
.super Ljava/lang/Object;
.source "BasicThreadFactory.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/loc/cq;->newThread(Ljava/lang/Runnable;)Ljava/lang/Thread;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/Runnable;

.field final synthetic b:Lcom/loc/cq;


# direct methods
.method constructor <init>(Lcom/loc/cq;Ljava/lang/Runnable;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/cq$1;->b:Lcom/loc/cq;

    iput-object p2, p0, Lcom/loc/cq$1;->a:Ljava/lang/Runnable;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/loc/cq$1;->a:Ljava/lang/Runnable;

    invoke-interface {v0}, Ljava/lang/Runnable;->run()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
