.class public Lcom/qihoo360/replugin/b;
.super Ljava/lang/Object;


# instance fields
.field private a:Ljava/lang/ClassLoader;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:[Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "[",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field

.field private e:Ljava/lang/reflect/Method;

.field private f:Z

.field private g:Z


# direct methods
.method public constructor <init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/ClassLoader;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/Class<",
            "*>;)V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/replugin/b;->a:Ljava/lang/ClassLoader;

    iput-object p2, p0, Lcom/qihoo360/replugin/b;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/qihoo360/replugin/b;->c:Ljava/lang/String;

    iput-object p4, p0, Lcom/qihoo360/replugin/b;->d:[Ljava/lang/Class;

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/qihoo360/replugin/b;->e:Ljava/lang/reflect/Method;

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/qihoo360/replugin/b;->f:Z

    iput-boolean p1, p0, Lcom/qihoo360/replugin/b;->g:Z

    return-void
.end method


# virtual methods
.method public varargs a(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    .locals 5

    iget-boolean v0, p0, Lcom/qihoo360/replugin/b;->f:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    :try_start_0
    iput-boolean v0, p0, Lcom/qihoo360/replugin/b;->f:Z

    iget-object v1, p0, Lcom/qihoo360/replugin/b;->a:Ljava/lang/ClassLoader;

    iget-object v2, p0, Lcom/qihoo360/replugin/b;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/qihoo360/replugin/b;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/qihoo360/replugin/b;->d:[Ljava/lang/Class;

    invoke-static {v1, v2, v3, v4}, Llibrary/h;->a(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/replugin/b;->e:Ljava/lang/reflect/Method;

    iput-boolean v0, p0, Lcom/qihoo360/replugin/b;->g:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    nop

    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/qihoo360/replugin/b;->e:Ljava/lang/reflect/Method;

    if-eqz v0, :cond_1

    :try_start_1
    invoke-static {v0, p1, p2}, Llibrary/h;->a(Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-object p1

    :catch_1
    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method
