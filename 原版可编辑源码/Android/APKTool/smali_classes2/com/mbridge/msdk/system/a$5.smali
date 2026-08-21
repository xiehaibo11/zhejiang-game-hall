.class final Lcom/mbridge/msdk/system/a$5;
.super Ljava/lang/Object;
.source "MBridgeSDKImpl.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/database/IDatabaseOpenHelper;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/system/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/system/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/system/a;)V
    .locals 0

    .line 411
    iput-object p1, p0, Lcom/mbridge/msdk/system/a$5;->a:Lcom/mbridge/msdk/system/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    .line 414
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/db/i;->a()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0
.end method

.method public final getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    .line 419
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/db/i;->b()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0
.end method
