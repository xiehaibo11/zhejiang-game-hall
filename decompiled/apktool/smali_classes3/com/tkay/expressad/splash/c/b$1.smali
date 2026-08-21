.class final Lcom/tkay/expressad/splash/c/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/c/b;->a(Lcom/tkay/expressad/splash/view/TYSplashView;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/splash/view/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:Lcom/tkay/expressad/splash/view/a;

.field final synthetic c:Lcom/tkay/expressad/splash/view/TYSplashView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/splash/view/a;Lcom/tkay/expressad/splash/view/TYSplashView;)V
    .locals 0

    .line 204
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/b$1;->a:Lcom/tkay/expressad/foundation/d/c;

    iput-object p2, p0, Lcom/tkay/expressad/splash/c/b$1;->b:Lcom/tkay/expressad/splash/view/a;

    iput-object p3, p0, Lcom/tkay/expressad/splash/c/b$1;->c:Lcom/tkay/expressad/splash/view/TYSplashView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 1

    .line 207
    invoke-static {}, Lcom/tkay/expressad/splash/c/b;->a()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/splash/c/b$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object p2

    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {p1, p2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 208
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/b$1;->b:Lcom/tkay/expressad/splash/view/a;

    if-eqz p1, :cond_0

    .line 209
    invoke-interface {p1}, Lcom/tkay/expressad/splash/view/a;->a()V

    .line 211
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/b$1;->c:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz p1, :cond_1

    const/4 p2, 0x1

    .line 212
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->setImageReady(Z)V

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 218
    invoke-static {}, Lcom/tkay/expressad/splash/c/b;->a()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/splash/c/b$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object p2

    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-virtual {p1, p2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 219
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/b$1;->b:Lcom/tkay/expressad/splash/view/a;

    if-eqz p1, :cond_0

    .line 220
    invoke-interface {p1}, Lcom/tkay/expressad/splash/view/a;->b()V

    .line 222
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/c/b$1;->c:Lcom/tkay/expressad/splash/view/TYSplashView;

    if-eqz p1, :cond_1

    const/4 p2, 0x0

    .line 223
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/splash/view/TYSplashView;->setImageReady(Z)V

    :cond_1
    return-void
.end method
