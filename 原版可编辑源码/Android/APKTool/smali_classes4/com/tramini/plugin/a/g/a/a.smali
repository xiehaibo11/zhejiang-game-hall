.class public final Lcom/tramini/plugin/a/g/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/CharSequence;


# instance fields
.field a:Ljava/lang/CharSequence;


# direct methods
.method public constructor <init>(Ljava/lang/CharSequence;)V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    iput-object p1, p0, Lcom/tramini/plugin/a/g/a/a;->a:Ljava/lang/CharSequence;

    return-void
.end method


# virtual methods
.method public final charAt(I)C
    .locals 1

    .line 17
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->isInterrupted()Z

    move-result v0

    if-nez v0, :cond_0

    .line 20
    iget-object v0, p0, Lcom/tramini/plugin/a/g/a/a;->a:Ljava/lang/CharSequence;

    invoke-interface {v0, p1}, Ljava/lang/CharSequence;->charAt(I)C

    move-result p1

    return p1

    .line 18
    :cond_0
    new-instance p1, Ljava/lang/RuntimeException;

    const-string v0, "Interrupted!"

    invoke-direct {p1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final length()I
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/tramini/plugin/a/g/a/a;->a:Ljava/lang/CharSequence;

    invoke-interface {v0}, Ljava/lang/CharSequence;->length()I

    move-result v0

    return v0
.end method

.method public final subSequence(II)Ljava/lang/CharSequence;
    .locals 2

    .line 30
    new-instance v0, Lcom/tramini/plugin/a/g/a/a;

    iget-object v1, p0, Lcom/tramini/plugin/a/g/a/a;->a:Ljava/lang/CharSequence;

    invoke-interface {v1, p1, p2}, Ljava/lang/CharSequence;->subSequence(II)Ljava/lang/CharSequence;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/tramini/plugin/a/g/a/a;-><init>(Ljava/lang/CharSequence;)V

    return-object v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/tramini/plugin/a/g/a/a;->a:Ljava/lang/CharSequence;

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
