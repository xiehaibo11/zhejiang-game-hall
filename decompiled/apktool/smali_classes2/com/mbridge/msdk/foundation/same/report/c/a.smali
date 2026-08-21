.class public Lcom/mbridge/msdk/foundation/same/report/c/a;
.super Ljava/lang/Object;
.source "LogFileController.java"


# static fields
.field public static final a:Ljava/lang/String;

.field private static b:Lcom/mbridge/msdk/foundation/same/report/c/a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 17
    const-class v0, Lcom/mbridge/msdk/foundation/same/report/c/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/same/report/c/a;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 19
    sput-object v0, Lcom/mbridge/msdk/foundation/same/report/c/a;->b:Lcom/mbridge/msdk/foundation/same/report/c/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/foundation/same/report/c/a;
    .locals 2

    .line 24
    sget-object v0, Lcom/mbridge/msdk/foundation/same/report/c/a;->b:Lcom/mbridge/msdk/foundation/same/report/c/a;

    if-nez v0, :cond_1

    .line 25
    const-class v0, Lcom/mbridge/msdk/foundation/same/report/c/a;

    monitor-enter v0

    .line 26
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/same/report/c/a;->b:Lcom/mbridge/msdk/foundation/same/report/c/a;

    if-nez v1, :cond_0

    .line 27
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/c/a;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/same/report/c/a;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/foundation/same/report/c/a;->b:Lcom/mbridge/msdk/foundation/same/report/c/a;

    .line 29
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 31
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/foundation/same/report/c/a;->b:Lcom/mbridge/msdk/foundation/same/report/c/a;

    return-object v0
.end method
