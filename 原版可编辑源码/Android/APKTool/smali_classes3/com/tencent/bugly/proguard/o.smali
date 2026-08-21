.class public abstract Lcom/tencent/bugly/proguard/o;
.super Ljava/lang/Object;
.source "BUGLY"


# instance fields
.field public id:I

.field public moduleName:Ljava/lang/String;

.field public version:Ljava/lang/String;

.field public versionKey:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract getTables()[Ljava/lang/String;
.end method

.method public abstract init(Landroid/content/Context;ZLcom/tencent/bugly/BuglyStrategy;)V
.end method

.method public onDbCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    return-void
.end method

.method public onDbDowngrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 3

    .line 69
    :try_start_0
    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/o;->getTables()[Ljava/lang/String;

    move-result-object p2

    if-nez p2, :cond_0

    return-void

    .line 72
    :cond_0
    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/o;->getTables()[Ljava/lang/String;

    move-result-object p2

    array-length p3, p2

    const/4 v0, 0x0

    :goto_0
    if-ge v0, p3, :cond_1

    aget-object v1, p2, v0

    const-string v2, "DROP TABLE IF EXISTS "

    .line 73
    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 75
    :cond_1
    invoke-virtual {p0, p1}, Lcom/tencent/bugly/proguard/o;->onDbCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 77
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    move-result p2

    if-nez p2, :cond_2

    .line 78
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    return-void
.end method

.method public onDbUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 3

    .line 47
    :try_start_0
    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/o;->getTables()[Ljava/lang/String;

    move-result-object p2

    if-nez p2, :cond_0

    return-void

    .line 50
    :cond_0
    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/o;->getTables()[Ljava/lang/String;

    move-result-object p2

    array-length p3, p2

    const/4 v0, 0x0

    :goto_0
    if-ge v0, p3, :cond_1

    aget-object v1, p2, v0

    const-string v2, "DROP TABLE IF EXISTS "

    .line 51
    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 53
    :cond_1
    invoke-virtual {p0, p1}, Lcom/tencent/bugly/proguard/o;->onDbCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 55
    invoke-static {p1}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    move-result p2

    if-nez p2, :cond_2

    .line 56
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    return-void
.end method

.method public onServerStrategyChanged(Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;)V
    .locals 0

    return-void
.end method
