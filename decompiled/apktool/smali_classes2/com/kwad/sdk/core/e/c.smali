.class public final Lcom/kwad/sdk/core/e/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/e/c$a;
    }
.end annotation


# static fields
.field public static aoC:Z = true

.field private static aoD:Z

.field private static final aoE:Lcom/kwad/sdk/core/e/a/b;

.field private static final aoF:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/e/a/b;",
            ">;"
        }
    .end annotation
.end field

.field private static aoG:Lcom/kwad/sdk/core/e/a/a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    sput-boolean v0, Lcom/kwad/sdk/core/e/c;->aoD:Z

    new-instance v0, Lcom/kwad/sdk/core/e/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/e/b;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/e/c;->aoE:Lcom/kwad/sdk/core/e/a/b;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/e/c;->aoF:Ljava/util/List;

    return-void
.end method

.method private static Bb()Ljava/lang/String;
    .locals 1

    const-string v0, "KSAdSDK"

    return-object v0
.end method

.method private static Bc()Ljava/lang/String;
    .locals 5

    sget-boolean v0, Lcom/kwad/sdk/core/e/c;->aoD:Z

    if-nez v0, :cond_0

    const-string v0, ""

    return-object v0

    :cond_0
    const/4 v0, -0x1

    new-instance v1, Ljava/lang/Throwable;

    invoke-direct {v1}, Ljava/lang/Throwable;-><init>()V

    invoke-virtual {v1}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v1

    array-length v2, v1

    const/4 v3, 0x3

    if-le v2, v3, :cond_1

    aget-object v0, v1, v3

    invoke-virtual {v0}, Ljava/lang/StackTraceElement;->getFileName()Ljava/lang/String;

    move-result-object v0

    aget-object v1, v1, v3

    invoke-virtual {v1}, Ljava/lang/StackTraceElement;->getLineNumber()I

    move-result v1

    goto :goto_0

    :cond_1
    const-string v1, "unknown"

    move-object v4, v1

    move v1, v0

    move-object v0, v4

    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "("

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v0, 0x3a

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/16 v0, 0x29

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static J(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "["

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "]: "

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " "

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/kwad/sdk/core/e/c;->Bc()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static K(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/e/c$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/core/e/c$1;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    return-void
.end method

.method private static L(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0xfa0

    if-le v0, v1, :cond_0

    const/4 v0, 0x0

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->K(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->L(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->K(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static M(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->J(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance p1, Lcom/kwad/sdk/core/e/c$7;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/core/e/c$7;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/e/a/b;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/e/c;->aoF:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/core/e/c;->aoF:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/e/c$a;)V
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/e/c;->aoF:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :catch_0
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/e/a/b;

    if-eqz v1, :cond_0

    :try_start_0
    invoke-interface {p0, v1}, Lcom/kwad/sdk/core/e/c$a;->b(Lcom/kwad/sdk/core/e/a/b;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_1
    return-void
.end method

.method public static a(ZLcom/kwad/sdk/core/e/a/a;)V
    .locals 1

    sput-boolean p0, Lcom/kwad/sdk/core/e/c;->aoC:Z

    sget-object p0, Lcom/kwad/sdk/core/e/c;->aoF:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->clear()V

    sget-object p0, Lcom/kwad/sdk/core/e/c;->aoF:Ljava/util/List;

    sget-object v0, Lcom/kwad/sdk/core/e/c;->aoE:Lcom/kwad/sdk/core/e/a/b;

    invoke-interface {p0, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sput-object p1, Lcom/kwad/sdk/core/e/c;->aoG:Lcom/kwad/sdk/core/e/a/a;

    return-void
.end method

.method static synthetic access$000()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/e/c;->Bb()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static cW(Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/e/c$6;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/e/c$6;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    return-void
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/e/c;->Bb()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->J(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->L(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->J(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/core/e/c$11;

    invoke-direct {v1, v0}, Lcom/kwad/sdk/core/e/c$11;-><init>(Ljava/lang/String;)V

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    sget-object v0, Lcom/kwad/sdk/core/e/c;->aoG:Lcom/kwad/sdk/core/e/a/a;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p0}, Lcom/kwad/sdk/core/e/a/a;->B(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    invoke-static {p2}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 p1, 0xa

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->J(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lcom/kwad/sdk/core/e/c$2;

    invoke-direct {v0, p1}, Lcom/kwad/sdk/core/e/c$2;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    sget-object p1, Lcom/kwad/sdk/core/e/c;->aoG:Lcom/kwad/sdk/core/e/a/a;

    if-eqz p1, :cond_0

    invoke-interface {p1, p2, p0}, Lcom/kwad/sdk/core/e/a/a;->B(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static i(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->J(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance p1, Lcom/kwad/sdk/core/e/c$8;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/core/e/c$8;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    return-void
.end method

.method public static printStackTrace(Ljava/lang/Throwable;)V
    .locals 1

    if-eqz p0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/e/c$3;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/e/c$3;-><init>(Ljava/lang/Throwable;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    :cond_0
    sget-object v0, Lcom/kwad/sdk/core/e/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method public static printStackTraceOnly(Ljava/lang/Throwable;)V
    .locals 1

    if-eqz p0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/e/c$4;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/e/c$4;-><init>(Ljava/lang/Throwable;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    :cond_0
    return-void
.end method

.method public static v(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->J(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance p1, Lcom/kwad/sdk/core/e/c$5;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/core/e/c$5;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    return-void
.end method

.method public static w(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->J(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance p1, Lcom/kwad/sdk/core/e/c$9;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/core/e/c$9;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    return-void
.end method

.method public static w(Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 0

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->J(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance p1, Lcom/kwad/sdk/core/e/c$10;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/core/e/c$10;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->a(Lcom/kwad/sdk/core/e/c$a;)V

    return-void
.end method
