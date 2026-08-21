.class public abstract Lcom/cmic/gen/sdk/e/n$a;
.super Ljava/lang/Object;
.source "ThreadUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/cmic/gen/sdk/e/n;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "a"
.end annotation


# instance fields
.field private final a:Ljava/lang/Thread$UncaughtExceptionHandler;


# direct methods
.method protected constructor <init>()V
    .locals 1

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 40
    new-instance v0, Lcom/cmic/gen/sdk/e/n$a$1;

    invoke-direct {v0, p0}, Lcom/cmic/gen/sdk/e/n$a$1;-><init>(Lcom/cmic/gen/sdk/e/n$a;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/e/n$a;->a:Ljava/lang/Thread$UncaughtExceptionHandler;

    return-void
.end method

.method protected constructor <init>(Landroid/content/Context;Lcom/cmic/gen/sdk/a;)V
    .locals 1

    .line 48
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 49
    new-instance v0, Lcom/cmic/gen/sdk/e/n$a$2;

    invoke-direct {v0, p0, p2, p1}, Lcom/cmic/gen/sdk/e/n$a$2;-><init>(Lcom/cmic/gen/sdk/e/n$a;Lcom/cmic/gen/sdk/a;Landroid/content/Context;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/e/n$a;->a:Ljava/lang/Thread$UncaughtExceptionHandler;

    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/e/n$a;)Ljava/lang/Thread$UncaughtExceptionHandler;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/cmic/gen/sdk/e/n$a;->a:Ljava/lang/Thread$UncaughtExceptionHandler;

    return-object p0
.end method


# virtual methods
.method protected abstract a()V
.end method

.method public run()V
    .locals 2

    .line 65
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/e/n$a;->a:Ljava/lang/Thread$UncaughtExceptionHandler;

    invoke-virtual {v0, v1}, Ljava/lang/Thread;->setUncaughtExceptionHandler(Ljava/lang/Thread$UncaughtExceptionHandler;)V

    .line 66
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/e/n$a;->a()V

    .line 67
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/lang/Thread;->setUncaughtExceptionHandler(Ljava/lang/Thread$UncaughtExceptionHandler;)V

    return-void
.end method
