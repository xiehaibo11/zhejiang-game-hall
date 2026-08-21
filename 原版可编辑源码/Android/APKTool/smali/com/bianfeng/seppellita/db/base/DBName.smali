.class public Lcom/bianfeng/seppellita/db/base/DBName;
.super Ljava/lang/Object;
.source "DBName.java"


# static fields
.field public static DB_TABLE_DATA:Ljava/lang/String;

.field public static db_name:Ljava/lang/String;

.field private static old_db_name:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const-string v0, "_seppellita.db"

    const-string v1, "_seppellita_v1.db"

    .line 9
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/bianfeng/seppellita/db/base/DBName;->old_db_name:[Ljava/lang/String;

    .line 10
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getPkgName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/seppellita/db/base/DBName;->db_name:Ljava/lang/String;

    const-string v0, "db_seppellita_data"

    .line 12
    sput-object v0, Lcom/bianfeng/seppellita/db/base/DBName;->DB_TABLE_DATA:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
