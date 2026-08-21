.class public Lcom/igexin/push/core/CoreConsts;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;

.field public static final b:Ljava/lang/String;

.field public static c:I

.field public static d:I

.field public static e:I

.field public static f:I

.field public static g:I

.field public static h:I

.field public static i:I

.field public static j:I

.field public static k:I

.field public static l:I

.field public static m:I

.field public static n:Ljava/lang/String;

.field public static final o:Ljava/lang/String;

.field public static final p:Ljava/lang/String;

.field public static final q:Ljava/lang/String;

.field public static r:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 11

    const-string v0, "co."

    const-string v1, "mi."

    const-string v2, "gex."

    const-string v3, "ins."

    const-string v4, "dka."

    const-string v5, "cti."

    const-string v6, "on."

    const-string v7, "notifi."

    const-string v8, "cation."

    const-string v9, "burying."

    const-string v10, "point."

    filled-new-array/range {v0 .. v10}, [Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x6

    const-string v2, "pre_burypoint."

    invoke-static {v1, v2, v0}, Lcom/igexin/push/core/CoreConsts;->a(ILjava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/CoreConsts;->a:Ljava/lang/String;

    const-string v1, "com."

    const-string v2, "ige."

    const-string v3, "xin."

    const-string v4, "sdk."

    const-string v5, "act."

    const-string v6, "ion."

    const-string v7, "do."

    const-string v8, "act."

    const-string v9, "tion."

    filled-new-array/range {v1 .. v9}, [Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x5

    const-string v2, "pre_doaction."

    invoke-static {v1, v2, v0}, Lcom/igexin/push/core/CoreConsts;->a(ILjava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/CoreConsts;->b:Ljava/lang/String;

    const/4 v0, 0x0

    sput v0, Lcom/igexin/push/core/CoreConsts;->c:I

    const/4 v2, 0x2

    sput v2, Lcom/igexin/push/core/CoreConsts;->d:I

    const/4 v3, 0x3

    sput v3, Lcom/igexin/push/core/CoreConsts;->e:I

    const/16 v3, 0xb

    sput v3, Lcom/igexin/push/core/CoreConsts;->f:I

    sput v1, Lcom/igexin/push/core/CoreConsts;->g:I

    const/4 v1, 0x7

    sput v1, Lcom/igexin/push/core/CoreConsts;->h:I

    const/16 v1, 0x9

    sput v1, Lcom/igexin/push/core/CoreConsts;->i:I

    const/16 v1, 0xa

    sput v1, Lcom/igexin/push/core/CoreConsts;->j:I

    sput v0, Lcom/igexin/push/core/CoreConsts;->k:I

    const/4 v0, 0x1

    sput v0, Lcom/igexin/push/core/CoreConsts;->l:I

    sput v2, Lcom/igexin/push/core/CoreConsts;->m:I

    const-string v0, "com.igexin.sdk.PushService"

    sput-object v0, Lcom/igexin/push/core/CoreConsts;->n:Ljava/lang/String;

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/CoreConsts;->o:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/core/CoreConsts;->o:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/Sdk/ImgCache/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/CoreConsts;->p:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/core/CoreConsts;->o:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/Sdk/WebCache/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/core/CoreConsts;->q:Ljava/lang/String;

    const-string v0, "com.igexin.sdk.GTPushService"

    sput-object v0, Lcom/igexin/push/core/CoreConsts;->r:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(ILjava/lang/String;[Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    if-lez p0, :cond_2

    if-eqz p2, :cond_2

    array-length v0, p2

    if-gtz v0, :cond_0

    goto :goto_1

    :cond_0
    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const/4 p1, 0x0

    move v2, p1

    :goto_0
    if-ge v2, p0, :cond_1

    array-length v3, p2

    invoke-virtual {v0, v3}, Ljava/util/Random;->nextInt(I)I

    move-result v3

    aget-object v3, p2, v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result p2

    add-int/lit8 p2, p2, -0x1

    invoke-virtual {p0, p1, p2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    :goto_1
    return-object p1
.end method

.method public static getBuryPointAction()Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    sget-object v0, Lcom/igexin/push/core/CoreConsts;->a:Ljava/lang/String;

    return-object v0
.end method
