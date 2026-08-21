.class public Lcom/tramini/plugin/a/g/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tramini/plugin/a/g/a$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 33
    const-class v0, Lcom/tramini/plugin/a/g/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tramini/plugin/a/g/a;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tramini/plugin/b/a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tramini/plugin/a/g/a$a;)V
    .locals 8

    if-nez p0, :cond_0

    const/4 p0, 0x0

    .line 39
    invoke-interface {p4, p0}, Lcom/tramini/plugin/a/g/a$a;->a(Lcom/tramini/plugin/a/c/a;)V

    return-void

    .line 44
    :cond_0
    invoke-static {}, Lcom/tramini/plugin/a/g/b/a;->a()Lcom/tramini/plugin/a/g/b/a;

    move-result-object v0

    new-instance v7, Lcom/tramini/plugin/a/g/a$1;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p4

    move-object v4, p1

    move-object v5, p2

    move-object v6, p3

    invoke-direct/range {v1 .. v6}, Lcom/tramini/plugin/a/g/a$1;-><init>(Lcom/tramini/plugin/b/a;Lcom/tramini/plugin/a/g/a$a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v7}, Lcom/tramini/plugin/a/g/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
