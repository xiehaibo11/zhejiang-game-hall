.class public Lcom/mbridge/msdk/video/js/a/b;
.super Ljava/lang/Object;
.source "DefaultJSBTModule.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/b;


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 10
    const-class v0, Lcom/mbridge/msdk/video/js/a/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/video/js/a/b;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public click(ILjava/lang/String;)V
    .locals 0

    .line 19
    sget-object p1, Lcom/mbridge/msdk/video/js/a/b;->a:Ljava/lang/String;

    const-string p2, "click"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public handlerH5Exception(ILjava/lang/String;)V
    .locals 0

    .line 30
    sget-object p1, Lcom/mbridge/msdk/video/js/a/b;->a:Ljava/lang/String;

    const-string p2, "handlerH5Exception"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 35
    sget-object p1, Lcom/mbridge/msdk/video/js/a/b;->a:Ljava/lang/String;

    const-string p2, "reactDeveloper"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
