.class public Lcom/igexin/b/a/d/d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<E:",
        "Lcom/igexin/b/a/d/e;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# static fields
.field static final synthetic i:Z


# instance fields
.field public a:Ljava/lang/String;

.field final transient b:Ljava/util/concurrent/locks/ReentrantLock;

.field final transient c:Ljava/util/concurrent/locks/Condition;

.field final d:Ljava/util/TreeSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/TreeSet<",
            "TE;>;"
        }
    .end annotation
.end field

.field final e:Ljava/util/concurrent/atomic/AtomicInteger;

.field f:I

.field g:Lcom/igexin/b/a/d/f;

.field public final h:Ljava/util/concurrent/atomic/AtomicLong;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/igexin/b/a/d/d;

    invoke-virtual {v0}, Ljava/lang/Class;->desiredAssertionStatus()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    sput-boolean v0, Lcom/igexin/b/a/d/d;->i:Z

    return-void
.end method

.method public constructor <init>(Ljava/util/Comparator;Lcom/igexin/b/a/d/f;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Comparator<",
            "-TE;>;",
            "Lcom/igexin/b/a/d/f;",
            ")V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/b/a/d/d;->a:Ljava/lang/String;

    new-instance v0, Ljava/util/concurrent/locks/ReentrantLock;

    invoke-direct {v0}, Ljava/util/concurrent/locks/ReentrantLock;-><init>()V

    iput-object v0, p0, Lcom/igexin/b/a/d/d;->b:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->newCondition()Ljava/util/concurrent/locks/Condition;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/b/a/d/d;->c:Ljava/util/concurrent/locks/Condition;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/igexin/b/a/d/d;->e:Ljava/util/concurrent/atomic/AtomicInteger;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    const-wide/16 v1, -0x1

    invoke-direct {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v0, p0, Lcom/igexin/b/a/d/d;->h:Ljava/util/concurrent/atomic/AtomicLong;

    new-instance v0, Ljava/util/TreeSet;

    invoke-direct {v0, p1}, Ljava/util/TreeSet;-><init>(Ljava/util/Comparator;)V

    iput-object v0, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    iput-object p2, p0, Lcom/igexin/b/a/d/d;->g:Lcom/igexin/b/a/d/f;

    return-void
.end method

.method private e()Lcom/igexin/b/a/d/e;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TE;"
        }
    .end annotation

    invoke-virtual {p0}, Lcom/igexin/b/a/d/d;->a()Lcom/igexin/b/a/d/e;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    iget-object v2, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    invoke-virtual {v2, v0}, Ljava/util/TreeSet;->remove(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    return-object v0

    :cond_1
    return-object v1
.end method


# virtual methods
.method public final a(Lcom/igexin/b/a/d/e;JLjava/util/concurrent/TimeUnit;)I
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TE;J",
            "Ljava/util/concurrent/TimeUnit;",
            ")I"
        }
    .end annotation

    iget-object v0, p0, Lcom/igexin/b/a/d/d;->b:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    :try_start_0
    iget-object v1, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    invoke-virtual {v1, p1}, Ljava/util/TreeSet;->contains(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    const/4 p1, -0x1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return p1

    :cond_0
    :try_start_1
    iget-object v1, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    invoke-virtual {v1, p1}, Ljava/util/TreeSet;->remove(Ljava/lang/Object;)Z

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sget-object v3, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v3, p2, p3, p4}, Ljava/util/concurrent/TimeUnit;->convert(JLjava/util/concurrent/TimeUnit;)J

    move-result-wide p2

    add-long/2addr v1, p2

    iput-wide v1, p1, Lcom/igexin/b/a/d/e;->u:J

    invoke-virtual {p0, p1}, Lcom/igexin/b/a/d/d;->a(Lcom/igexin/b/a/d/e;)Z

    move-result p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, -0x2

    :goto_0
    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return p1

    :catchall_0
    move-exception p1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    throw p1
.end method

.method a()Lcom/igexin/b/a/d/e;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TE;"
        }
    .end annotation

    :try_start_0
    iget-object v0, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    invoke-virtual {v0}, Ljava/util/TreeSet;->first()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/igexin/b/a/d/e;
    :try_end_0
    .catch Ljava/util/NoSuchElementException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public final a(Lcom/igexin/b/a/d/e;)Z
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TE;)Z"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    iget-object v1, p0, Lcom/igexin/b/a/d/d;->b:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    :try_start_0
    invoke-virtual {p0}, Lcom/igexin/b/a/d/d;->a()Lcom/igexin/b/a/d/e;

    move-result-object v2

    iget v3, p0, Lcom/igexin/b/a/d/d;->f:I

    const/4 v4, 0x1

    add-int/2addr v3, v4

    iput v3, p0, Lcom/igexin/b/a/d/d;->f:I

    iput v3, p1, Lcom/igexin/b/a/d/e;->v:I

    iget-object v3, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    invoke-virtual {v3, p1}, Ljava/util/TreeSet;->add(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_1

    iget v2, p1, Lcom/igexin/b/a/d/e;->v:I

    sub-int/2addr v2, v4

    iput v2, p1, Lcom/igexin/b/a/d/e;->v:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return v0

    :cond_1
    :try_start_1
    invoke-virtual {p1}, Lcom/igexin/b/a/d/e;->n()V

    if-eqz v2, :cond_2

    iget-object v3, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    invoke-virtual {v3}, Ljava/util/TreeSet;->comparator()Ljava/util/Comparator;

    move-result-object v3

    invoke-interface {v3, p1, v2}, Ljava/util/Comparator;->compare(Ljava/lang/Object;Ljava/lang/Object;)I

    move-result p1

    if-gez p1, :cond_3

    :cond_2
    iget-object p1, p0, Lcom/igexin/b/a/d/d;->c:Ljava/util/concurrent/locks/Condition;

    invoke-interface {p1}, Ljava/util/concurrent/locks/Condition;->signalAll()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_3
    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return v4

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    :try_start_2
    const-string p1, "ScheduleQueue|offer|error"

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {p1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return v0

    :goto_0
    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    throw p1
.end method

.method public final a(Ljava/lang/Class;)Z
    .locals 5

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    iget-object v0, p0, Lcom/igexin/b/a/d/d;->b:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    :try_start_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iget-object v2, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    invoke-virtual {v2}, Ljava/util/TreeSet;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/igexin/b/a/d/e;

    invoke-virtual {v3}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    if-ne v4, p1, :cond_1

    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    invoke-virtual {p1, v1}, Ljava/util/TreeSet;->removeAll(Ljava/util/Collection;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return p1

    :catchall_0
    move-exception p1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    throw p1
.end method

.method final b()Z
    .locals 2

    iget-object v0, p0, Lcom/igexin/b/a/d/d;->b:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->lock()V

    :try_start_0
    iget-object v1, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    invoke-virtual {v1}, Ljava/util/TreeSet;->isEmpty()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return v1

    :catchall_0
    move-exception v1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    throw v1
.end method

.method public final c()Lcom/igexin/b/a/d/e;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TE;"
        }
    .end annotation

    iget-object v0, p0, Lcom/igexin/b/a/d/d;->b:Ljava/util/concurrent/locks/ReentrantLock;

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->lockInterruptibly()V

    :goto_0
    :try_start_0
    invoke-virtual {p0}, Lcom/igexin/b/a/d/d;->a()Lcom/igexin/b/a/d/e;

    move-result-object v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/igexin/b/a/d/d;->e:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1, v2}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    iput v3, p0, Lcom/igexin/b/a/d/d;->f:I

    iget-object v1, p0, Lcom/igexin/b/a/d/d;->c:Ljava/util/concurrent/locks/Condition;

    invoke-interface {v1}, Ljava/util/concurrent/locks/Condition;->await()V

    goto :goto_0

    :cond_0
    sget-object v4, Ljava/util/concurrent/TimeUnit;->NANOSECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v1, v4}, Lcom/igexin/b/a/d/e;->a(Ljava/util/concurrent/TimeUnit;)J

    move-result-wide v4

    iget-boolean v6, v1, Lcom/igexin/b/a/d/e;->k:Z

    if-nez v6, :cond_2

    iget-boolean v6, v1, Lcom/igexin/b/a/d/e;->m:Z

    if-eqz v6, :cond_1

    goto :goto_1

    :cond_1
    move v2, v3

    :cond_2
    :goto_1
    const-wide/16 v6, 0x0

    cmp-long v6, v4, v6

    if-lez v6, :cond_5

    if-eqz v2, :cond_3

    goto :goto_2

    :cond_3
    iget-object v2, p0, Lcom/igexin/b/a/d/d;->h:Ljava/util/concurrent/atomic/AtomicLong;

    iget-wide v6, v1, Lcom/igexin/b/a/d/e;->u:J

    invoke-virtual {v2, v6, v7}, Ljava/util/concurrent/atomic/AtomicLong;->set(J)V

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "schedule take|needAlarm = "

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/igexin/b/a/d/d;->g:Lcom/igexin/b/a/d/f;

    iget-boolean v6, v6, Lcom/igexin/b/a/d/f;->t:Z

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v6, "|"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "@"

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Object;->hashCode()I

    move-result v6

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v2, p0, Lcom/igexin/b/a/d/d;->g:Lcom/igexin/b/a/d/f;

    iget-boolean v2, v2, Lcom/igexin/b/a/d/f;->t:Z

    if-eqz v2, :cond_4

    iget-object v2, p0, Lcom/igexin/b/a/d/d;->g:Lcom/igexin/b/a/d/f;

    iget-wide v6, v1, Lcom/igexin/b/a/d/e;->u:J

    invoke-virtual {v2, v6, v7}, Lcom/igexin/b/a/d/f;->a(J)V

    :cond_4
    iget-object v1, p0, Lcom/igexin/b/a/d/d;->c:Ljava/util/concurrent/locks/Condition;

    invoke-interface {v1, v4, v5}, Ljava/util/concurrent/locks/Condition;->awaitNanos(J)J

    goto :goto_0

    :cond_5
    :goto_2
    invoke-direct {p0}, Lcom/igexin/b/a/d/d;->e()Lcom/igexin/b/a/d/e;

    move-result-object v1

    sget-boolean v2, Lcom/igexin/b/a/d/d;->i:Z

    if-nez v2, :cond_7

    if-eqz v1, :cond_6

    goto :goto_3

    :cond_6
    new-instance v1, Ljava/lang/AssertionError;

    invoke-direct {v1}, Ljava/lang/AssertionError;-><init>()V

    throw v1

    :cond_7
    :goto_3
    invoke-virtual {p0}, Lcom/igexin/b/a/d/d;->b()Z

    move-result v2

    if-nez v2, :cond_8

    iget-object v2, p0, Lcom/igexin/b/a/d/d;->c:Ljava/util/concurrent/locks/Condition;

    invoke-interface {v2}, Ljava/util/concurrent/locks/Condition;->signalAll()V

    :cond_8
    iget-object v2, p0, Lcom/igexin/b/a/d/d;->h:Ljava/util/concurrent/atomic/AtomicLong;

    const-wide/16 v3, -0x1

    invoke-virtual {v2, v3, v4}, Ljava/util/concurrent/atomic/AtomicLong;->set(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    return-object v1

    :catchall_0
    move-exception v1

    invoke-virtual {v0}, Ljava/util/concurrent/locks/ReentrantLock;->unlock()V

    throw v1
.end method

.method public final d()V
    .locals 1

    iget-object v0, p0, Lcom/igexin/b/a/d/d;->d:Ljava/util/TreeSet;

    invoke-virtual {v0}, Ljava/util/TreeSet;->clear()V

    return-void
.end method
