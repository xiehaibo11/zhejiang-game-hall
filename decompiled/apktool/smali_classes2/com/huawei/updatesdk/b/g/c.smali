.class public Lcom/huawei/updatesdk/b/g/c;
.super Ljava/lang/Object;
.source ""


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/huawei/updatesdk/b/g/c$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/util/concurrent/ThreadPoolExecutor;

.field public static final b:Ljava/util/concurrent/ThreadPoolExecutor;


# direct methods
.method static constructor <clinit>()V
    .locals 17

    new-instance v8, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v5, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v6, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v6}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    new-instance v7, Lcom/huawei/updatesdk/b/g/c$a;

    const-string v0, "UpdateSDK-ServerTask"

    invoke-direct {v7, v0}, Lcom/huawei/updatesdk/b/g/c$a;-><init>(Ljava/lang/String;)V

    const/4 v1, 0x2

    const/4 v2, 0x2

    const-wide/16 v3, 0xa

    move-object v0, v8

    invoke-direct/range {v0 .. v7}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V

    sput-object v8, Lcom/huawei/updatesdk/b/g/c;->a:Ljava/util/concurrent/ThreadPoolExecutor;

    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v14, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v15, Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-direct {v15}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>()V

    new-instance v1, Lcom/huawei/updatesdk/b/g/c$a;

    const-string v2, "UpdateSDK-CheckTask"

    invoke-direct {v1, v2}, Lcom/huawei/updatesdk/b/g/c$a;-><init>(Ljava/lang/String;)V

    const/4 v10, 0x0

    const/4 v11, 0x2

    const-wide/16 v12, 0x5

    move-object v9, v0

    move-object/from16 v16, v1

    invoke-direct/range {v9 .. v16}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/ThreadFactory;)V

    sput-object v0, Lcom/huawei/updatesdk/b/g/c;->b:Ljava/util/concurrent/ThreadPoolExecutor;

    return-void
.end method
