.class final Lcom/kwad/components/core/c/a$a;
.super Landroid/database/sqlite/SQLiteOpenHelper;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static If:I = 0x1


# instance fields
.field private Ig:Ljava/lang/String;

.field private Ih:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 3

    sget v0, Lcom/kwad/components/core/c/a$a;->If:I

    const-string v1, "ksadcache.db"

    const/4 v2, 0x0

    invoke-direct {p0, p1, v1, v2, v0}, Landroid/database/sqlite/SQLiteOpenHelper;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V

    const-string p1, "CREATE TABLE IF NOT EXISTS ksad_ad_cache (creativeId VARCHAR PRIMARY KEY NOT NULL, posId TEXT, adJson TEXT, ecpm INTEGER, playAgainJson TEXT, adSenseJson TEXT, createTime INTEGER, expireTime INTEGER)"

    iput-object p1, p0, Lcom/kwad/components/core/c/a$a;->Ig:Ljava/lang/String;

    const-string p1, "CREATE TABLE IF NOT EXISTS ksad_ad_cache_strategy(posId VARCHAR PRIMARY KEY NOT NULL, cacheSize INTEGER, cacheSecond INTEGER, strategyCode INTEGER, enable INTEGER)"

    iput-object p1, p0, Lcom/kwad/components/core/c/a$a;->Ih:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/c/a$a;->Ig:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/c/a$a;->Ih:Ljava/lang/String;

    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    return-void
.end method

.method public final onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    return-void
.end method
