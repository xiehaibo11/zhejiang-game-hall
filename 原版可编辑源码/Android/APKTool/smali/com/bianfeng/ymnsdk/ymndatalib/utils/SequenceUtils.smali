.class public Lcom/bianfeng/ymnsdk/ymndatalib/utils/SequenceUtils;
.super Ljava/lang/Object;
.source "SequenceUtils.java"


# static fields
.field public static atomicLong:Ljava/util/concurrent/atomic/AtomicLong;


# direct methods
.method public static constructor <clinit>()V
    .locals 3

    .line 1
    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    const-wide/16 v1, 0x0

    invoke-direct {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    sput-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/SequenceUtils;->atomicLong:Ljava/util/concurrent/atomic/AtomicLong;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static get()J
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/ymndatalib/utils/SequenceUtils;->atomicLong:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->getAndIncrement()J

    move-result-wide v0

    return-wide v0
.end method
