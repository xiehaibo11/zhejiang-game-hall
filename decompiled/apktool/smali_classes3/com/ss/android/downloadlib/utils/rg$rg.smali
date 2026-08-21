.class Lcom/ss/android/downloadlib/utils/rg$rg;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/reflect/InvocationHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/utils/rg;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "rg"
.end annotation


# instance fields
.field private rg:Ljava/lang/Object;


# direct methods
.method private constructor <init>(Ljava/lang/Object;)V
    .locals 0

    .line 167
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 168
    iput-object p1, p0, Lcom/ss/android/downloadlib/utils/rg$rg;->rg:Ljava/lang/Object;

    return-void
.end method

.method synthetic constructor <init>(Ljava/lang/Object;Lcom/ss/android/downloadlib/utils/rg$1;)V
    .locals 0

    .line 163
    invoke-direct {p0, p1}, Lcom/ss/android/downloadlib/utils/rg$rg;-><init>(Ljava/lang/Object;)V

    return-void
.end method


# virtual methods
.method public invoke(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Throwable;
        }
    .end annotation

    :try_start_0
    const-string p1, "startActivity"

    .line 174
    invoke-virtual {p2}, Ljava/lang/reflect/Method;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 175
    invoke-static {p3}, Lcom/ss/android/downloadlib/utils/rg;->rg([Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 180
    :catchall_0
    :cond_0
    iget-object p1, p0, Lcom/ss/android/downloadlib/utils/rg$rg;->rg:Ljava/lang/Object;

    invoke-virtual {p2, p1, p3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method
