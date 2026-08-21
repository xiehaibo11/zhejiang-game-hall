.class public final Lcom/kwad/framework/filedownloader/f/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/f/c$b;,
        Lcom/kwad/framework/filedownloader/f/c$e;,
        Lcom/kwad/framework/filedownloader/f/c$c;,
        Lcom/kwad/framework/filedownloader/f/c$a;,
        Lcom/kwad/framework/filedownloader/f/c$d;
    }
.end annotation


# static fields
.field private static aeH:Landroid/content/Context;


# direct methods
.method public static a(IJLjava/lang/String;Ljava/lang/String;Lcom/kwad/framework/filedownloader/y;)Z
    .locals 2

    if-eqz p4, :cond_0

    if-eqz p3, :cond_0

    invoke-interface {p5, p3, p0}, Lcom/kwad/framework/filedownloader/y;->l(Ljava/lang/String;I)I

    move-result p5

    if-eqz p5, :cond_0

    invoke-static {}, Lcom/kwad/framework/filedownloader/message/e;->vg()Lcom/kwad/framework/filedownloader/message/e;

    move-result-object v0

    new-instance v1, Lcom/kwad/framework/filedownloader/exception/PathConflictException;

    invoke-direct {v1, p5, p3, p4}, Lcom/kwad/framework/filedownloader/exception/PathConflictException;-><init>(ILjava/lang/String;Ljava/lang/String;)V

    invoke-static {p0, p1, p2, v1}, Lcom/kwad/framework/filedownloader/message/f;->a(IJLjava/lang/Throwable;)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/kwad/framework/filedownloader/message/e;->s(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static a(ILcom/kwad/framework/filedownloader/d/c;Lcom/kwad/framework/filedownloader/y;Z)Z
    .locals 6

    invoke-interface {p2, p1}, Lcom/kwad/framework/filedownloader/y;->a(Lcom/kwad/framework/filedownloader/d/c;)Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-static {}, Lcom/kwad/framework/filedownloader/message/e;->vg()Lcom/kwad/framework/filedownloader/message/e;

    move-result-object p2

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v1

    invoke-virtual {p1}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v3

    move v0, p0

    move v5, p3

    invoke-static/range {v0 .. v5}, Lcom/kwad/framework/filedownloader/message/f;->a(IJJZ)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    move-result-object p0

    invoke-virtual {p2, p0}, Lcom/kwad/framework/filedownloader/message/e;->s(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static a(ILjava/lang/String;ZZ)Z
    .locals 1

    const/4 v0, 0x0

    if-eqz p2, :cond_0

    return v0

    :cond_0
    if-eqz p1, :cond_1

    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/kwad/framework/filedownloader/message/e;->vg()Lcom/kwad/framework/filedownloader/message/e;

    move-result-object p1

    invoke-static {p0, p2, p3}, Lcom/kwad/framework/filedownloader/message/f;->a(ILjava/io/File;Z)Lcom/kwad/framework/filedownloader/message/MessageSnapshot;

    move-result-object p0

    invoke-virtual {p1, p0}, Lcom/kwad/framework/filedownloader/message/e;->s(Lcom/kwad/framework/filedownloader/message/MessageSnapshot;)V

    const/4 p0, 0x1

    return p0

    :cond_1
    return v0
.end method

.method public static ap(Landroid/content/Context;)V
    .locals 0

    sput-object p0, Lcom/kwad/framework/filedownloader/f/c;->aeH:Landroid/content/Context;

    return-void
.end method

.method public static vM()Landroid/content/Context;
    .locals 1

    sget-object v0, Lcom/kwad/framework/filedownloader/f/c;->aeH:Landroid/content/Context;

    return-object v0
.end method
