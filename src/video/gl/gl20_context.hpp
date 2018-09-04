//  SuperTux
//  Copyright (C) 2018 Ingo Ruhnke <grumbel@gmail.com>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef HEADER_SUPERTUX_VIDEO_GL_GL20_CONTEXT_HPP
#define HEADER_SUPERTUX_VIDEO_GL_GL20_CONTEXT_HPP

#include "video/gl/gl_context.hpp"

class GL20Context final : public GLContext
{
public:
  GL20Context();
  ~GL20Context();

  virtual void bind() override;

  virtual void ortho(float width, float height) override;

  virtual void set_positions(const float* data, size_t size) override;

  virtual void set_texcoords(const float* data, size_t size) override;
  virtual void set_texcoord(float u, float v) override;

  virtual void set_colors(const float* data, size_t size) override;
  virtual void set_color(const Color& color) override;

  virtual void bind_texture(const GLTexture& texture) override;
  virtual void bind_no_texture() override;

  virtual void draw_arrays(GLenum type, GLint first, GLsizei count) override;

private:
  GL20Context(const GL20Context&) = delete;
  GL20Context& operator=(const GL20Context&) = delete;
};

#endif

/* EOF */
