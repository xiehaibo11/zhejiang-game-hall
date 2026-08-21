.class public final Lcom/tkay/expressad/atsignalcommon/b/c$d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/atsignalcommon/b/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "d"
.end annotation


# instance fields
.field protected a:Ljava/lang/reflect/Constructor;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/reflect/Constructor<",
            "*>;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Ljava/lang/Class;[Ljava/lang/Class;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;[",
            "Ljava/lang/Class<",
            "*>;)V"
        }
    .end annotation

    .line 176
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-nez p1, :cond_0

    return-void

    .line 179
    :cond_0
    :try_start_0
    invoke-virtual {p1, p2}, Ljava/lang/Class;->getDeclaredConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object p2

    iput-object p2, p0, Lcom/tkay/expressad/atsignalcommon/b/c$d;->a:Ljava/lang/reflect/Constructor;
    :try_end_0
    .catch Ljava/lang/NoSuchMethodException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p2

    .line 181
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;

    invoke-direct {v0, p2}, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;-><init>(Ljava/lang/Exception;)V

    .line 182
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/b/c$b$a;->a(Ljava/lang/Class;)V

    .line 183
    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/b/c;->a(Lcom/tkay/expressad/atsignalcommon/b/c$b$a;)V

    return-void
.end method

.method private varargs a([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2

    .line 189
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/b/c$d;->a:Ljava/lang/reflect/Constructor;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V

    .line 191
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/b/c$d;->a:Ljava/lang/reflect/Constructor;

    invoke-virtual {v0, p1}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 193
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method
