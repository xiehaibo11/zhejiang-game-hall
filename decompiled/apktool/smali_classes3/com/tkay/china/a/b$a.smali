.class final Lcom/tkay/china/a/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/china/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "a"
.end annotation


# static fields
.field private static e:Ljava/lang/Object;

.field private static f:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field

.field private static g:Ljava/lang/reflect/Method;

.field private static h:Ljava/lang/reflect/Method;

.field private static i:Ljava/lang/reflect/Method;

.field private static j:Ljava/lang/reflect/Method;


# instance fields
.field final a:Ljava/lang/String;

.field final b:Ljava/lang/String;

.field final c:Ljava/lang/String;

.field final d:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    :try_start_0
    const-string v0, "com.android.id.impl.IdProviderImpl"

    .line 239
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 240
    sput-object v0, Lcom/tkay/china/a/b$a;->f:Ljava/lang/Class;

    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/a/b$a;->e:Ljava/lang/Object;

    .line 241
    sget-object v0, Lcom/tkay/china/a/b$a;->f:Ljava/lang/Class;

    const-string v1, "getUDID"

    const/4 v2, 0x1

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Landroid/content/Context;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/a/b$a;->g:Ljava/lang/reflect/Method;

    .line 242
    sget-object v0, Lcom/tkay/china/a/b$a;->f:Ljava/lang/Class;

    const-string v1, "getOAID"

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Landroid/content/Context;

    aput-object v4, v3, v5

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/a/b$a;->h:Ljava/lang/reflect/Method;

    .line 243
    sget-object v0, Lcom/tkay/china/a/b$a;->f:Ljava/lang/Class;

    const-string v1, "getVAID"

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Landroid/content/Context;

    aput-object v4, v3, v5

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/a/b$a;->i:Ljava/lang/reflect/Method;

    .line 244
    sget-object v0, Lcom/tkay/china/a/b$a;->f:Ljava/lang/Class;

    const-string v1, "getAAID"

    new-array v2, v2, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v2, v5

    invoke-virtual {v0, v1, v2}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    sput-object v0, Lcom/tkay/china/a/b$a;->j:Ljava/lang/reflect/Method;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 250
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 251
    sget-object v0, Lcom/tkay/china/a/b$a;->g:Ljava/lang/reflect/Method;

    invoke-static {p1, v0}, Lcom/tkay/china/a/b$a;->a(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/china/a/b$a;->a:Ljava/lang/String;

    .line 252
    sget-object v0, Lcom/tkay/china/a/b$a;->h:Ljava/lang/reflect/Method;

    invoke-static {p1, v0}, Lcom/tkay/china/a/b$a;->a(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/china/a/b$a;->b:Ljava/lang/String;

    .line 253
    sget-object v0, Lcom/tkay/china/a/b$a;->i:Ljava/lang/reflect/Method;

    invoke-static {p1, v0}, Lcom/tkay/china/a/b$a;->a(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/china/a/b$a;->c:Ljava/lang/String;

    .line 254
    sget-object v0, Lcom/tkay/china/a/b$a;->j:Ljava/lang/reflect/Method;

    invoke-static {p1, v0}, Lcom/tkay/china/a/b$a;->a(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/china/a/b$a;->d:Ljava/lang/String;

    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;
    .locals 3

    .line 262
    sget-object v0, Lcom/tkay/china/a/b$a;->e:Ljava/lang/Object;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    const/4 v1, 0x1

    :try_start_0
    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p0, v1, v2

    .line 264
    invoke-virtual {p1, v0, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 266
    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static a()Z
    .locals 1

    .line 258
    sget-object v0, Lcom/tkay/china/a/b$a;->f:Ljava/lang/Class;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/tkay/china/a/b$a;->e:Ljava/lang/Object;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x0

    return v0
.end method
