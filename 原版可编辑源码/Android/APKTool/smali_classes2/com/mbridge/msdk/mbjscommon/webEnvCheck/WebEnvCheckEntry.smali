.class public Lcom/mbridge/msdk/mbjscommon/webEnvCheck/WebEnvCheckEntry;
.super Ljava/lang/Object;
.source "WebEnvCheckEntry.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public check(Landroid/content/Context;)V
    .locals 6

    .line 11
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    .line 12
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "<html><script>"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/c/b/c;->a()Lcom/mbridge/msdk/c/b/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/b/c;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "</script></html>"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v1, 0x0

    const-string v3, "text/html"

    const-string v4, "utf-8"

    const/4 v5, 0x0

    .line 13
    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
